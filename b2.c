	Errors and corrections	

airquality
mean(airquality$Ozone)
mean(airquality$Ozone,na.rm=TRUE)
max(airquality$Solar.R)
max(airquality$Solar.R,na.rm=TRUE)
summary(airquality)

Data Cleaning – Removing NAs


air=airquality
air$Ozone=ifelse(is.na(air$Ozone),median(air$Ozone,na.rm=TRUE),air$Ozone)
summary(air)
air$Solar.R=ifelse(is.na(air$Solar.R),median(air$Solar.R,na.rm=TRUE),air$Solar.R)
summary(air)

Data Transformation 1

head(air)
air$Solar.Danger=air$Solar.R>100
head(air)
Data Transformation 2

brks=c(0,50,100,150,200,250,300,350)
air$Solar.R=cut(air$Solar.R,breaks=brks,include.lowest=TRUE)
air
Data Transformation 3

air=airquality
air1 =air
air1$Month=gsub(5,"May",air1$Month)
air1$Month=gsub(6,"June",air1$Month)
air1$Month=gsub(7,"July",air1$Month)
air1$Month=gsub(8,"Aug",air1$Month)
air1$Month=gsub(9,"Sept",air1$Month)
head(air1)




Data Model Building

head(cars)  # display the first 6 observations
linearMod <- lm(dist ~ speed, data=cars)  # build linear regression model on full data
print(linearMod)
#> Call:
#> lm(formula = dist ~ speed, data = cars)
#> 
#> Coefficients:
#> (Intercept)        speed  
#>     -17.579        3.932



