setwd('/home/anjali/aas')
d=read.csv('fb.csv',sep=';')
head(d)     #displaying first 6 records,for last 6 use tail
dim(d)
ncol(d)
nrow(d)	

Subseting
sub=d[c('Category','comment','like','share')]  
head(sub)
write.csv(sub,'sub.csv')
sub2=subset(sub,comment>50)

Merging
first=read.csv('fb.csv',sep=';')
second=read.csv('fb2.csv',sep=';')
newdata = rbind(first,second)
dim(newdata

Sorting
d=read.csv('fb.csv',sep=';')
sub=d[c('Category','comment','like','share')]
x=sub[order(-d$share),]   ###-d for sorting in descending order
head(x)

Transposing Dataset
d=read.csv('fb.csv',sep=';')
sub=d[c('Category','comment','like','share')]
tran=t(sub)
head(tran)

Melting data to long format
library(reshape2)
d=read.csv('fb.csv',sep=';')
sub=d[c('Category','comment','like','share')]
melt(data=sub,id.vars="Category")

Casting
library(reshape2)
d=read.csv('fb.csv',sep=';')
sub=d[c('Category','Post.Month','Post.Year','Paid')]
head(sub)
dcast(sub,Category ~ 'Post.Month' ,mean,value='Paid')

