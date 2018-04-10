

# Read data Algo-time-data.txt
my_data <- read.table("Algo-time-data.txt", header=T, sep="\t") 
max_y <- max(my_data)
plot_colors <- c("blue","black")

#Let us store graph in png file
png(filename="performance.png",height=4.7,width=6,units = "in",res=300)
plot(my_data$Ring.Cloaked.K,type="o",col=plot_colors[1],ylim=c(0,max_y),axes=FALSE,  ann=FALSE)

#Scale and data on X axis
axis(1, at=1:6, labels=c("15","30","45","60","75","90"),lwd=0, lwd.ticks=2)

#Y axis scale adjustment
axis(2, las=1,cex.axis=0.8, at=10000*0:max_y)

# Create box around plot
box()

# Graph Deviation with red dashed line and square points
lines(my_data$Ring.CloakLess.K, type="o", pch=22, lty=2, col=plot_colors[2])

# Give title to graph
title(main="Algorithms Performance Study”)

# Label the x and y axes with dark green text
title(xlab= "No of images as input", col.lab=rgb(0,0,0))
title(ylab= "Average Time (ms)", col.lab=rgb(0,0,0))

# Create a legend at (1, max_y) that is slightly smaller 
# (cex) and uses the same line colors and points used by the actual plots
legend(1, max_y, names(my_data), cex=0.8, col=plot_colors, 
   pch=21:22, lty=1:2);
   
# Turn off device driver (to flush output to png)
dev.off()

