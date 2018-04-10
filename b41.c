barchart  
# Create the data for the chart.
H <- c(7,12,28,3,41)
M <- c("Mar","Apr","May","Jun","Jul")
# Give the chart file a name.
png(file = "barchart_months_revenue.png")
# Plot the bar chart.
barplot(H,names.arg=M,xlab="Month",ylab="Revenue",col="blue",
main="Revenue chart",border="red")
# Save the file.
dev.off()


linechart
# Create the data for the chart.
v <- c(7,12,28,3,41)
# Give the chart file a name.
png(file = "line_chart_label_colored.jpg")
# Plot the bar chart.
plot(v,type="o",col="red",xlab="Month",ylab="Rain fall",main="Rain fall chart")
# Save the file.
dev.off()


scatter
# Get the input values.
input <- mtcars[,c('wt','mpg')]
# Give the chart file a name.
png(file = "scatterplot.png")
# Plot the chart for cars with weight between 2.5 to 5 and mileage between 15
and 30.
plot(x=input$wt,y=input$mpg,
xlab="Weight",
ylab="Milage",
xlim=c(2.5,5),
ylim=c(15,30),
main="Weight vs Milage"
)
# Save the file.
dev.off()


piechart
# Create data for the graph.
x <- c(21, 62, 10, 53)
labels <- c("London", "New York", "Singapore", "Mumbai")
# Give the chart file a name.
png(file = "city.jpg")
# Plot the chart.
pie(x,labels)
# Save the file.
dev.off()


