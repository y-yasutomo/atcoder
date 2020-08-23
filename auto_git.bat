cd C:\Users\sskai\github\atcoder
git init
git config --global user.name "y-yasutomo"
git config --global user.email "sskaiyou2510@gmail.com"
git clone https://github.com/y-yasutomo/atcoder C:\Users\sskai\github\atcoder\atcoder
xcopy /d C:\Users\sskai\desktop\atcoder C:\Users\sskai\github\atcoder\atcoder
cd atcoder
git add --all
git commit -m "auto commit"
git push -f
exit