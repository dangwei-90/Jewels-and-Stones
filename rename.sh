for i in ./*.md;
do mv "$i" "${i%.md}";
done
