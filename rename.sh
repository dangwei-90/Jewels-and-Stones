for i in ./*.cpp;
do mv "$i" "${i%.cpp}.md";
done
