files=$(ls ./input/*.txt)
filenames=$(ls -1  ./input/*.txt | sed -e 's/\.txt$//' | xargs -n 1 basename)

G='\033[0;36m'
W='\033[1;37m'

i=1
for j in $files
do
file[i]=$j
i=$(( i + 1 ))
done

i=1
for j in $filenames
do
echo -e "$i. ${G} $j ${W}"
i=$(( i + 1 ))
done

read -s -n 1 num

python3 ./py/main.py < ${file[$num]}
