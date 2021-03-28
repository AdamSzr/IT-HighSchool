,
@echo off 
echo Witaj w programie instruktazowym, co robic gdy komputer sie nie wlacza 
ping 1.1.1.1 -n 1 -w 1000 > nu1
echo zaraz beda zadawane kolejne pytania instrukcje i podpowiedzi
ping 1.1.1.1 -n 1 -w 1000 > nu1
echo co nalezy zrobic podczas awari 
ping 1.1.1.1 -n 1 -w 1000 > nu1
echo aby rozpoczac napisz start 
set/p "a=>"
if %a%==start goto start
:start
cls
echo aby przejsc do naprawy pc warto wykonac podstawowe czynnosci w zakresie BHP 
echo 1. zadbac o czystosc stanowiska
echo 2. sprawdzic czy na stanowisku pracy znajduja sie magnesy badz 
echo namagnesowane przemioty (jesli tak nalezy je usunac)
echo 3. dotknac uziemienia (kranu, uziemienia w kontakcie itp.) w celu 
echo wyladowania ladunku elektrycznego.
echo 4. podaczas naprawy pc nie piwinno sie nosic ubran z tworzyw sztucznych
echo 5. dobrze bylo by wyposazyc sie w mate elektrostatyczna pod stanowiskiem pracy
echo 6. nalezy przygotowac roznego rodzaju narzedzia do naprawy PC (srubokrety, 
echo szczypce/kombinerki, drucik metalowy, multimetr)
pause
cls
echo pierwsze pytanie
echo czy komputer po wcisnieciu przycisku zasilania wlacza sie ?
echo.
set/p "q1=>"
if %q1%==tak goto koniec
if %q1%==nie goto q1jak
:q1jak
cls
echo sprawdz czy przycisk wlacznika w obudowie Pc jest Podpowienio podpiety
echo do plyty glownej oraz przesledz czy wszystkie przewody panelu przedniego  
echo (wlacznika) nie sa polamane / zle zlutowane,
echo.
echo mozna tez uruchomic PC bez wlacznika  Aby to zrobic nalezy
echo wyciagnac kabel odpowiadajacy PWRBTN# oraz GND.
echo (Gole) piny nalezy zlaczyc czyms metalowym. Komputer powinien zaczac 
echo sie uruchamiac. Jesli tak sie dzieje to uszkodzony jest wlacznik
echo ( opcja pomoc dotyczy pinow i podlaczenia ich z plyta glowna)
echo ________________________________________________________________________________
echo jezeli nie pomoglo napisz                              dalej 
echo jezeli nie wiesz jak rozwiazac problem nalezy napisac  pomoc
echo jezeli po problemnie nalezy napisac                    koniec
set/p "q1jak=>"
if %q1jak%==koniec goto koniec 
if %q1jak%==pomoc goto q1pomoc
if %q1jak%==dalej goto q2
:q1pomoc 
cls
echo Wskazowka 
echo otworzmy obudowe i sprawdzmy polaczenia. Opis sposobu, w jaki po 
echo szczegolne przewody powinny byc podpiete znajdziemy w instrukcji obslugi
echo plyty glownej. Jesli ten dokument gdzies zgubilismy, rowniez nie ma powodu 
echo dopaniki. Po szczegolne wyprowadzenia na plycie glownej sa opisane i wystarcza
echo dobre oczy, zwinne palce i chwila cierpliwosci, aby ponownie podlaczyc 
echo wszystkie przewody.
echo _________________________________________________________________________________
echo aby zobaczyc zdjecie pomocnicze nalezy napisac zdj
echo aby cofnac napisz back

set/p "q1zdj=>"
if %q1zdj%==zdj goto q1zdj
if %q1zdj%==back goto q1jak
:q1zdj
start Q1-Q3.3.jpg
goto q1pomoc
pause
end 



:q2
cls
echo Sprawdzilem przewody wygladaja na sprawne a PC sie nie wlacza.
echo To prawdopodobnie usterka zasilacza.
ping 1.1.1.1 -n 1 -w 4000 > nu1
:q21
echo.
echo aby zdiagnozowac niepoprawne dzilanie zasilacza nalezy:
echo pierw wyciagnac wszystkie komponenty z plyty glownej 
echo nastepnie 
echo przejsc do diagnozy mozna to zrobic poprzez wyciagniecie wtyczki z plyty glownej
echo oraz dlaczenie wszystkich kabli zasilajacych  od pozostalych elementow komputera
echo.
echo  nastepnie zlaczenie jednym koncem spinacza otworu odpowiadajacego zielonemu
echo kabelkowi oraz drugim koncem otworu odpowiadajacemu ktoremus z czarnych kabli.
echo Jesli wentylator zasilacza nie kreci sie to mozemy byc prawie pewni ze to 
echo on byl przyczyna awarii PC lecz aby upewnic sie czy nasza jednostka 
echo zasilajaca  jest  sprawna wartosprawdzic napiecia poprzez mierzenie napiec
echo przy  ktore podaje, na przykladza pomoca miernika. W dzisiejszych komputerach
echo tak naprawde najwieksze znaczeniema linia 5V oraz 12V, tak wiec tylko te dwie
echo linie nalezy sprawdzic. Linii 12V odpowiadaja zolte kable, a linii 5V 
echo odpowiadaja kable czerwone. Wybor na ktorej wtyczce bedziemy sprawdzac napiecia
echo na tym etapie nie ma znaczenia. Czarna koncowke miernika wkladamy do otworu 
echo odpowiadajacego czarnemu kablowi a czerwonado otworu odpowiadajacemu kablowi
echo zoltemu. Napiecie powinno miescic sie w zakresechoie 11.4 V do 12.6 V. Jednak
echo tak mowi norma ATX. W rzeczywistosci lepiej aby napiecie nie spadalo ponizej
echo 11.8 V oraz nie wychodzilo poza 12.2V. Tak samo postepujemy z otworem 
echo odpowiadajacym czerwonemu kablowi. Wedlugnormy ATX napiecie powinno miescic 
echo sie w zakresie od 4.75 V do 5.25 V. Realnie najlepiej gdyby miescilo sie w 
echo zakresie od 4.8 V do 5.2 V.
echo  Jesli napiecia ktore odczytalismy mieszcza sie w
echo tym zakresie to zasilacz jest mniej wiecej sprawny.
echo.
echo Lecz gdy zasilacz nie zakrêci³ wiatrakiem po zlaczeniu, a zmierzyc napiacia w wtyczkachnie mamy jak 
echo zmierzyc to    aby upewnic sie, ze mamy 
echo racje co do zrodla usterki, sprobujmy wykrecic dzialajacy zasilacz z innego 
echo komputera. Jezeli z nowym zasilaczem plyta glowna  sie uruchomi,mozemy byc
echo prawie pewni, ze nasza jednostka PSU (jednostka zasilajaca) jest wadliwa.
echo. 
echo Jezeli wadliwym sprzetem okazal sie zasilacz mozemy  pewni ze usterki doznal zasilacz mozna sprobowac go 
echo naprawic :jednak Nie doradzamy  takiego rozwiazania osobom, ktore nie sa 
echo zaznajomione chociaz ze podstawami naprawy sprzetu elektronicznego
echo W wielu przypadkach uszkodzony zasilaczmozna w prosty sposob naprawic
echo poprzez wymiane bezpiecznika  (w zasilczu).
echo ________________________________________________________________________________
echo jezeli nie pomoglo napisz                              dalej 
echo jezeli nie wiesz jak rozwiazac problem nalezy napisac  pomoc
echo jezeli po problemnie nalezy napisac                    koniec
set/p "q2jak=>"
if %q2jak%==koniec goto koniec 
if %q2jak%==pomoc goto q2pomoc
if %q2jak%==dalej goto q3

:q2pomoc
cls
echo Aby Rozmontowac wszystkie karty rozszerzen (odkrecamy srubke oraz wyjmujemy je
echo prostopadle do plyty glownej w gore), pamieci (naciskamy rownoczesnie na dwa 
echo zaczepy) oraz procesor (bardzo ogolnie ujmujac u AMD podnosimy dzwignie od
echo chlodzenia do gory, sciagamy chlodzenie oraz wyciagamy procesor ktory nalezy
echo tez zwolnic dzwignia, u Intela przekrecamy kazdy zaczep zgodnie ze strzalka 
echo oraz wyciagamy chlodzenie z minimalna sila do gory, procesor rowniez wyciagamy
echo poprzez zwolnienie dzwigni)
echo ________________________________________________________________________________
echo aby zobaczyc zdjecie pomocnicze nalezy napisac zdj
echo aby cofnac napisz back

set/p "q2zdj=>"
if %q2zdj%==zdj goto q2zdj
if %q2zdj%==back goto q2
:q2zdj
start q2.jpg
goto q2pomoc

:q3
cls
echo Zdiagnozowalismy ze zasilacz jest sprawny natomiast usterka PC lezy gdzies 
echo indziej to nastepnym podejrzanym staje sie plyta glowna 
ping 1.1.1.1 -n 1 -w 4000 > nu1
echo.
echo Czy na powiezchni plyty glownej widnieja slady dzialania wysokiej temperatury?
echo ________________________________________________________________________________
echo tak
echo nie
echo pomoc

set/p "pytanie=>"
if %pytanie%==tak goto q10
if %pytanie%==nie goto q11
if %pytanie%==pomoc goto q3pomoc
:q3pomoc
echo.
echo Aby to zdiagnozowac nalezy wypatrzec sie w plyte glowna i gdy zauwazymy jakies slady
echo po wysokiej temperaturze- wytopienia, okopcenia itp to plyta glowna jest “spalona” i  echo wowczas ten sprzet nadaje sie do wyrzucenia
echo ________________________________________________________________________________
echo aby cofnac napisz back
set/p "q3pomoc=>"
if %q3pomoc%==back goto q3



:q10
cls
echo plyta glowna jest spalona, W tej sytuacji nie pozostaje 
echo nam nic innego niz wymiana.
echo ________________________________________________________________________________
echo jezeli nie pomoglo napisz                              dalej 
echo jezeli nie wiesz jak rozwiazac problem nalezy napisac  pomoc
echo jezeli po problemnie nalezy napisac                    koniec

set/p "q10jak=>"
if %q10jak%==koniec goto koniec 
if %q10jak%==pomoc goto q10pomoc
if %q10jak%==dalej goto q11
:q10pomoc
cls
echo Aby to zdiagnozowac nalezy wypatrzec sie w plyte glowna i gdy zauwazymy 
echo jakies slady po wysokiej temperaturze- wytopienia, okopcenia itp to plyta 
echo glowna jest spalona i wowczas ten sprzet nadaje sie do wyrzucenia

:q11
cls
echo Czy Kondensatory zamontowane na plycie glownej maja wybrzuszenia ?
ping 1.1.1.1 -n 1 -w 4000 > nu1
echo.
echo Uszkodzenie ktore mozemy sami naprawic polegac moze na wylaniu lub
echo wybrzuszeniu sie kondensatorow. Naprawa mial by polegac na  Wymianie
echo kondensatorow. Koszt takiej naprawy jest w przeciwienstwie do zasilacza
echo dosyc niski i zwykle oplacalny. 
echo ________________________________________________________________________________
echo jezeli nie pomoglo napisz                              dalej 
echo aby uruchomic zdjecie pomocnicze napisz                zdj
echo jezeli po problemnie nalezy napisac                    koniec

set/p "q11jak=>"
if %q11jak%==koniec goto koniec 
if %q11jak%==pomoc goto q11zdj
if %q11jak%==dalej goto q12

:q11zdj
start q11.jpg
goto q11 

echo napisz back aby cofnac 
set/p cofnij
if %cofnij%==back goto q41

:q12
cls
echo Jezeli na plycie glownej nie widac sladow spalenia i wadliwych 
echo kondensatorow sprobuj ponownie odpalc komputer recznie.
ping 1.1.1.1 -n 1 -w 4000 > nu1
echo.
echo W (golej) plycie glownej pozostawiajac tylko od zasilajace
echo – 20 pin/24 pin oraz 4 pionowe zlacze zasilania procesora. (Gola) 
echo  plyte probujemy uruchomic poprzez zlaczenie wyzej opisanych pinow 
echo odpowiadajacych wlacznikowi.
echo _____________________________________________________________________
echo jezeli nie pomoglo napisz                              dalej 
echo aby uruchomic zdjecie pomocnicze napisz                zdj
echo jezeli po problemnie nalezy napisac                    koniec
set/p "q12jak=>"
if %q12jak%==koniec goto koniec 
if %q12jak%==zdj goto zdj12
if %q12jak%==dalej goto q4

:zdj12
start Q1-Q3.3.jpg
goto q12
cls
echo Aby recznie uruchomic PC nalezy
echo wyciagnac kabel odpowiadajacy PWRBTN# oraz GND.
echo (Gole) piny nalezy zlaczyc czyms metalowym. Komputer powinien zaczac
echo sie uruchamiac.
echo _____________________________________________________________________
echo aby zobaczyc zdjecie pomocnicze nalezy napisac zdj 

set/p "q12zdj=>"
if %q12zdj%==zdj goto q12zdj
if %q12zdj%==back goto q12
:q12zdj

:q4
cls

echo A moze wadliwy procesor ?
ping 1.1.1.1 -n 1 -w 3000 > nu1
echo.
echo Do golej plyty glownej montujemy procesor. Na procesor nalezy nalozyc cienka 
echo warstwe pasty termo-przewodzacej pomiedzy powierzchnie chlodzenia (Radiator) 
echo oraz procesora. Do p³yty podpinamy g³oœniczek, ale tylko wtedy gdy nie jest on obecny na 
echo p³ycie g³ownej. Tak przygotowana plyte nalezy uruchomic. Jesli
echo wentylator chlodzenia procesora oraz zasilacza nie kreci sie oznacza to ze
echo procesor powoduje zwarcie – jest uszkodzony. 
echo
echo Jesli wentylatory siê  kreci sie to procesor potencjalnie jest dobry. Uruchomieniu
echo plyty powinny towarzyszyc przerywane dzwieki wydobywajace sie z glosniczka.
echo Sygnalizowac powinny one brak pamieci operacyjnej. Jesli dzwieki pojawiaja sie oznacza 
echo to ze procesor daje oznaki zycia. Jednak jesli dzwieki nie pojawiaja sie
echo powinnismy zresetowac zawartosc pamieci BIOS-u. 
echo _______________________________________________________________________________
echo jezeli nie pomoglo napisz                              dalej 
echo jezeli nie wiesz jak rozwiazac problem nalezy napisac  pomoc
echo jezeli po problemnie nalezy napisac                    koniec
echo.
set/p "q4jak=>"
if %q4jak%==koniec goto koniec 
if %q4jak%==pomoc goto q4pomoc
if %q4jak%==dalej goto q5
:q4pomoc
cls
echo procesor nalezy zamontowac  w odwrotnej kolejnosci jak zostal on wyciagniety.
echo glosniczek ma  gniazdo  czteropinowe, powinno znajdowac sie niedaleko gniazda
echo Front Panel i byc oznaczone Speaker.
echo Reset Bios’u W nowoczesnych plytach glownych czesto mozna spotkac sluzace do
echo tego przyciski. Standardowo sluzy do tego zworka. W instrukcji plyty glownej
echo opisane jest dokladne miejsce gdzie znajduje sie taka zworka.( lecz
echo najczesciej wystepuje ona obok baterii, najczesciej pod znazwa CMOS,
echo CLR CMOS, CLEAR BIOS, CLRCT sa to 2 piny ktore nalezy zlaczyc na okolo
echo 1 min). Zworka moze byc troj-pinowa – przekladamy zworke z pozycji 1-2
echo na pozycje 2-3 i z powrotem na 1-2 – lub 2 pinowa – wtedy laczymy tylko 
echo te dwa piny.) Teoretycznie latwiejszym sposobem na zresetowanie pamieci
echo BIOS-u jest wyciagniecie baterii  jednak czasami musi uplynac duzo czasu
echo zanim pamiec zdazy sie zresetowac.
echo _____________________________________________________________________________
echo do wyboru sa zdjecia pomocnicze takie jak
echo zdj (reset bios'u 2 piny)
echo zdj1 (reset bios'u 3 piny)
echo zdj2 (reset biosu guzik)
echo zdj3 (glosniczek)
echo napisz back aby cofnac 
set/p "q4zdj=>"
if %q4zdj%==back goto q4
if %q4zdj%==zdj  start q4.jpg
if %q4zdj%==zdj1 start q41.jpg
if %q4zdj%==zdj2 start q42.jpg
if %q4zdj%==zdj3 start q43.jpg
goto q4pomoc

:q5
cls
echo kolejnym podejrzanym staje sie Pamiec Ram :
ping 1.1.1.1 -n 1 -w 3000 > nu1
echo.
echo Jedynym z objawow  ktory bedzie jedno znaczny jest to ze kosci ram sa wadliwe to
echo fakt iz  gdy umiescimy w slotach plyty glownej nasza pamiec a nastepnie pc nie 
echo nie zakreci wentylatorami to swiadczy o wadliwej kosci ram.
echo.
echo Drugim objawem jest to ze po wlozeniu pamieci plyta plyta przestaje piszczec.
echo Oznacza to zwykle ze pamieci sa uszkodzone.
echo Po wlozeniu pamieci plyta powinna zaczac wydawac dzwieki o innej charakterystyce
echo to znaczy wskazywac na blad karty graficznej. 
echo Dzwieki powinny miec charakter 1 dlugi dwa krotkie.
echo.
echo Jesli plyta nie piszczy powinnismy  zresetowac pamiec BIOS-u lub wkladac kazda
echo kosc RAM po kolei i pojedynczo do kazdego banku pamieci. 
echo Byc moze plyta uruchomi sie za ktoras kombinacja. 
echo ________________________________________________________________________________
echo jezeli nie pomoglo napisz                              dalej 
echo jezeli po problemnie nalezy napisac                    koniec
set/p "q5jak=>"
if %q5jak%==koniec goto koniec 
if %q5jak%==dalej goto qzapomnialem
if %q5jak%==pomoc goto q5 pomoc

:qzapomnialem
cls
echo Nastepna przyczyna moze byc Karta graficzna
echo ping 1.1.1.1 -n 1 -w 3000 > nu1
echo Po wlozeniu w Gniazdo karty graficznej i gdy sprobujemy: wlaczyc PC i nastapi :
echo komputer sie nie uruchamia, wentylatory po uruchomieniu ani drgna, zadne dzwieki
echo nie wydobywaja sie oznacza to ze karta powoduje zwarcie. Sprawdzic mozemy tak
echo jak w przykladach wyzej kondensatory. Gdy one nie sa uszkodzone, to karta po
echo prostu nie dziala i trzeba ja wymienic.
echo.
echo Podczas gdy komputer sie uruchamia, a nie wydaje zadnych dzwiekow moze to 
echo oznaczac ze karta graficzna jest uszkodzona lub zasilacz, ktory nie potrafi
echo podolac karcie graficznej.
echo.
echo Trzecim przypadkiem jest sytuacja gdy komputer sie uruchamia, a wciaz pomimo
echo wlozonej oraz poprawnie podlaczonej karty graficznej wydaje dzwieki 
echo wskazujace na blad karty graficznej. Oznacza to tylko tyle ze plyta glowna 
echo gniazdo PCI badz jego laczenia (mozna do powiedziec rowniez ze do 
echo PCI Express x16 jestesmy w stanie zamontowac komponent PC z zlaczem
echo PCI Express np: x1 )  lub karta graficzna jest uszkodzona .
echo Lecz jesli powyzsze kroki okazaly sie bez skuteczne w naprawie PC to
echo w nastepnej kolejnosci nalezy skupic sie na dysku twardym

echo ________________________________________________________________________________
echo jezeli nie pomoglo napisz                              dalej 
echo dostepne jest zdj pomocnicze                           zdj
echo jezeli po problemnie nalezy napisac                    koniec
set/p "q5jak=>"
if %q5jak%==koniec goto koniec 
if %q5jak%==dalej goto q6
if %q5jak%==zdj goto qzapomnialempomoc

:qzapomnialempomoc
cls
start q6.jpg
goto qzapomnialem


ehco zby zobaczyc co to zlacze pci express napisz zdj
set/p "qwe=>"
if%qwe%==start


:q6
cls
echo Dysk twardy
ping 1.1.1.1 -n 1 -w 3000 > nu1
echo.
echo Awaria dysku twardego najczesciej objawia sie tym, ze nie jest on 
echo widoczny w systemie operacyjnym. A jesli system byl za instalowany
echo na wadliwym dysku to podczas uruchamiania komputera otrzymamy 
echo komunikat o braku dysku rozruchowego.
echo Jedynie na dyskach twardych mozemy optycznie sprawdzic czy cos
echo jest nie tak – czesto wypaleniu ulegaja elementy elektroniki
echo dysku twardego.
echo.
echo Pierwsza rzecza, jaka powinnismy zrobic jest sprawdzenie, czy
echo dysk jest widoczny w BIOS-ie. Do BIOS-u 
echo Jesli dysk jest widoczny w bios zaleca sie glebokie formatowanie
echo dysku
echo ________________________________________________________________________________
echo jezeli nadal nie pomoglo napisz                        dalej 
echo jezeli nie wiesz jak rozwiazac problem nalezy napisac  pomoc
echo jezeli po problemnie nalezy napisac                    koniec
set/p "q6jak=>"
if %q6jak%==koniec goto koniec 
if %q6jak%==pomoc goto q6pomoc
if %q6jak%==dalej goto q7

:q6pomoc
cls
echo.
echo do Bios’u uzyskamy dostep wciskajac odpowiedni klawisz podczas 
echo przed rozpoczeciem uruchamiania systemu operacyjnego. Najczesciej
echo jest to klawisz DEL ,F10 , F1 albo kombinacja ALT+F1. Informacja
echo o tym, co nalezy wcisnac wyswietlana jest podczas uruchamiania
echo komputera, znajdziemy ja rowniez w instrukcji obslugi plyty glownej.
echo ___________________________________________________________________________________
echo dostepne sa 2 zdj 
echo dysk twardy                            zdj 
echo napisz back aby cofnac 
set/p "q6zdj=>"
if %q6zdj%==back goto q6
if %q6zdj%==zdj goto zdjq6

:zdjq6
start q71.jpg
goto q6pomoc


:q7
cls
echo Prawdo podobnie awaria komponentu PC zostala juz zdiagnozowana , 
echo jezeli nie to prawdo podobnie nie uczerbek PC nie jest zwiazany
echo z podzespolami lecz bledem systemowym badz zlym dopasowaniem
echo komponentow ktore nie wspolpracuja ze soba.

pause


:koniec

end
