// parse data

void parse_data(String datain)
{
indexA=datain.indexOf('A');
indexB=datain.indexOf("B");
indexC=datain.indexOf("C");
indexD=datain.indexOf("D");
indexE=datain.indexOf("E");
indexF=datain.indexOf("F");
indexG=datain.indexOf("G");
indexH=datain.indexOf("H");
indexI=datain.indexOf("I");
indexJ=datain.indexOf("J");
indexK=datain.indexOf("K");
indexL=datain.indexOf("L");
indexM=datain.indexOf("M");
indexN=datain.indexOf("N");
indexO=datain.indexOf("O");
indexP=datain.indexOf("P");

data1=datain.substring(0,indexA);
data2=datain.substring(indexA+1,indexB);
data3=datain.substring(indexB+1,indexC);
data4=datain.substring(indexC+1,indexD);
data5=datain.substring(indexD+1,indexE);
data6=datain.substring(indexE+1,indexF);
data7=datain.substring(indexF+1,indexG);
data8=datain.substring(indexG+1,indexH);
data9=datain.substring(indexH+1,indexI);
data10=datain.substring(indexI+1,indexJ);
data11=datain.substring(indexJ+1,indexK);
data12=datain.substring(indexK+1,indexL);
data13=datain.substring(indexL+1,indexM);
data14=datain.substring(indexM+1,indexN);
data15=datain.substring(indexN+1,indexO);
data16=datain.substring(indexO+1,indexP);


LX=data1.toInt();
LY=data2.toInt();
RX=data3.toInt();
RY=data4.toInt();
Cross=data5.toInt();
Square=data6.toInt();
Triangle=data7.toInt();
Circle=data8.toInt();
UP=data9.toInt();
DOWN=data10.toInt();
LEFT=data11.toInt();
RIGHT=data12.toInt();
L1=data13.toInt();
L2=data14.toInt();
R1=data15.toInt();
R2=data16.toInt();
}
