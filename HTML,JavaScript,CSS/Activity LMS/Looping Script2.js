var names = new Array();
var i = 0;
do 
{
	var NamePiece = prompt("Enter name");
	if (NamePiece > " ")
	
		names[i] = NamePiece;
		i = i + 1;
	
}
while (NamePiece > " ");

document.write("<h2>" + names.length + " " + "Names Entered: </h2>");

document.write("<ol>");
for (i in names)
{
	document.write("<li>" + names[i] + "<br>");
	document.write("its type is: " + typeof names[i]);
}
document.write("</ol>");
document.write("The Array's Length is: " + names.length);

