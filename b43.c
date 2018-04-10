 //Read the data set from file forestfires.xls  in forestfires data frame
forestfires <- read_excel("C:/Users/bnjagdale/Desktop/DataScience & BigData/DSBDA Laboratory/Lab B4 Visulization Using R-Python/forestfires.xls")

//Store 3D Graph in png file
png(file = "C:/Users/bnjagdale/Desktop/DataScience & BigData/DSBDA Laboratory/Lab B4 Visulization Using R-Python/3Dforestfires.png")

//Take only three veriables Location X, Y and temperature as Z
input <- forestfires[,c('X','Y','temp')] 

// package plot3D shoud be used. If not install in in R  from cran project sources
plot3D::points3D(input$X,input$Y,input$temp)  

//Close the device and find the graph in file
dev.off()

