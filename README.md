# Selico
Met ons product kan de gebruiker (65+ in een woonzorgcentrum) zelfstandig de motoriek en het cognitief vermogen verbeteren aan de hand van de voorgeschreven oefeningen van de kinesist.

Projectteam: Bojan Ronsijn; Reijn Lapere
Datum: 05/12/2024

## Samenvatting
Het groeiende tekort aan personeel in zorg- en revalidatiecentra, in combinatie met de stijgende vraag naar effectieve revalidatie- en stimulatiemethoden, vraagt om innovatieve oplossingen. Hedendaagse methoden vereisen vaak begeleiding, waardoor de werkdruk voor zorgverleners toeneemt en de autonomie van gebruikers wordt beperkt.

Om dit probleem aan te pakken, hebben we verschillende onderzoeksactiviteiten uitgevoerd. We hebben expertinterviews gehouden met zorgverleners, kinesisten en andere professionals met ervaring in het vak, en een benchmarkanalyse uitgevoerd. We observeerden een bewegingssessie in een woonzorgcentrum en voerden twee testfases uit, waarbij we gebruikerstests en scenario’s doorliepen om de praktische toepassing te evalueren. We verdiepten ons ook in bewezen Ronnie Gardiner Methode, die effectief cognitieve en motorische vaardigheden stimuleert door middel van ritme en multisensorische prikkels.

"Selico" is een interactief systeem dat de gebruiker multisensorisch uitdaagt door middel van licht, trillingen en druk. Het systeem stelt kinesisten in staat om gepersonaliseerde oefeningen te ontwerpen die de gebruiker zelfstandig kan uitvoeren, zonder constante begeleiding. Door deze autonomie te vergroten, helpt het systeem zorgverleners te ontlasten, wat de werkdruk vermindert. Het biedt een innovatieve oplossing voor de huidige tekortkomingen in de zorg, waar de behoefte aan effectieve, zelfstandige therapie groeit.

- Hero sketch/render/image

> [!Note]
> - Volledige protocollen en rapporten zijn beschikbaar in de sectie [bijlagen](https://github.com/reijnlapere/PGG-Ageing-Young/edit/main/README.md#bijlagen).
> - Ruwe data zoals foto's, notities en video-opnames zijn terug te vinden in de protocollen en reports.
> - Alle geraadpleegde bronnen zijn te vinden in de sectie [bronnen](https://github.com/reijnlapere/PGG-Ageing-Young/edit/main/README.md#bronnen).


## Introductie
De vergrijzing en het groeiende tekort aan zorgpersoneel in woonzorgcentra en revalidatiecentra creëren een dringende behoefte aan innovatieve oplossingen die zorgvragers zelfstandiger maken en zorgverleners ontlasten. Vooral in de revalidatie en cognitieve stimulatie is de vraag naar efficiënte, toegankelijke hulpmiddelen groot.

Ons project richt zich op het ontwikkelen van een interactief, multisensorisch systeem dat gebruikers zelfstandig kan helpen bij het verbeteren van hun motorische, cognitieve en reactieve vaardigheden. De kern van ons systeem bestaat uit een combinatie van slim gepositioneerde pods, een centrale interface en een ondersteunende app. Deze methode combineert ritme, beweging en sensorische prikkels voor optimale activering van lichaam en geest.

De doelstelling van het project is het bieden van een gebruiksvriendelijk en flexibel systeem dat zelfstandig gebruik stimuleert. Een belangrijke voorwaarde is dat de gebruiker zonder constante begeleiding het systeem kan bedienen. Daarnaast moet het systeem eenvoudig aanpasbaar zijn aan individuele behoeften en niveaus, wat mogelijk wordt gemaakt door een door een kinesist ontworpen configuratie via een app.

Met deze oplossing hopen we niet alleen de werkdruk in de zorg te verlichten, maar ook de levenskwaliteit en zelfstandigheid van zorgvragers te vergroten.


## Methodologie
Het ontwikkelingsproces van Selico volgde een iteratieve en gebruiksgerichte aanpak, waarbij de behoeften van gebruikers centraal stonden. 

In de eerste fase, de exploratiefase, onderzochten we de problematiek rondom motorische en cognitieve stimulatie bij ouderen in woonzorgcentra. Het tekort aan zorgpersoneel en de beperkte autonomie van ouderen vormden de kern van het probleem. Om dit goed te begrijpen, moesten we dieper gaan. We voerde expertinterviews uit met kinesisten, psychologen en zorgverleners. Daarnaast observeerden we een bewegingssessie in een woonzorgcentrum. Hier analyseerden we hoe visuele, auditieve en tactiele prikkels de prestaties en betrokkenheid beïnvloedden. Een benchmarkanalyse van bestaande producten, zoals de Tovertafel en Bob It, gaf inzicht in wat al beschikbaar was en waar de hiaten lagen. Deze onderzoeken resulteerden in een scherp geformuleerde probleemstelling en eerste ontwerpvereisten.

In de definitiefase verdiepten we ons verder in het probleem en starten we met het opstellen van een storyboard om de volledige user journey vast te leggen. Deze aanpak bracht verschillende aspecten en componenten van het product aan het licht die nader gespecificeerd moesten worden. Het testen van deze componenten werd opgesplitst in twee afzonderlijke testfasen, waarbij voor elke fase prototypes werden ontwikkeld die gericht waren op specifieke eigenschappen of functionaliteiten van het product.

Met deze prototypes zochten we meteen de eerste gebruikers op om feedback te verzamelen.Per testfase zochten we minimaal 5 verschillende gebruikers en een kinesist. Op basis van deze inzichten werden de nodige aanpassingen doorgevoerd, met als doel een gebruiksvriendelijk en frictieloos ontwerp te creëren dat een optimale user experience biedt. Na elke testfase werd een analyse uitgevoerd, waarbij we essentiële design requirements vaststelden. Deze requirements dienden als leidraad voor het ontwikkelen van ons finaal concept.

<p align="center">
  <img src="/images/IMG_1390.JPEG" width="49%">

## Discovery  (N=20)

### Doelstellingen  
Dit project onderzocht de uitdagingen van 65-plussers met motorische beperkingen. De belangrijkste onderzoeksvragen waren:  
- Hoe kunnen zij effectief worden uitgedaagd zonder overbelasting?  
- Wat is de rol van personalisatie bij het aanpassen van activiteiten?  
- Hoe beïnvloedt het betrekken van zintuigen hun prestaties?  
- Hoe kan technologie (zoals smart devices) effectief worden ingezet zonder complexiteit te introduceren?  

Het doel was hierbij een helder geformuleerde "how might we" bekomen. 

### Materiaal & Methodes  

#### Expert Interviews (N=3)
Interviews met drie professionals – Bruno (onderzoeker van een gelijkaardig project), Heleen (begeleider in een woonzorgcentrum), en Koen (psycholoog voor ouderen met niet-aangeboren hersenletsel) – gaven inzichten in de uitdagingen van de doelgroep en effectieve benaderingen voor fysieke activiteiten.  

#### Observatiesessie (N=17)
Tijdens een observatiesessie met 65-plussers werden fysieke en cognitieve reacties op verschillende oefeningen geanalyseerd. Elementen zoals rekkers en stokken werden gebruikt, en de begeleiding door instructeurs werd geanalyseerd. Zij wisselden oefeningen af, boden duidelijke en herhaalde instructies (verbaal en visueel) en besteedden persoonlijke aandacht aan deelnemers met specifieke behoeften. Daarnaast werd geobserveerd hoe visuele, auditieve en tactiele prikkels betrokkenheid en prestaties beïnvloedden.  

#### Benchmarking  
Bestaande producten zoals de "Bob It"-spellen, de Tovertafel, en interactieve tafels werden geëvalueerd. Deze benchmarks boden inspiratie, maar vaak ontbrak een combinatie van fysieke en visuele interactie.  


### Resultaten  

- **Problematiek bij motorische beperkingen:** De belangrijkste problemen die 65-plussers met motorische beperkingen ondervinden, zijn gerelateerd aan mobiliteit, krachtverlies en coördinatieproblemen. Dit heeft invloed op hun vermogen om deel te nemen aan fysieke activiteiten, vooral als er sprake is van specifieke aandoeningen zoals niet-aangeboren hersenletsel (NAH). Koen benadrukte dat de beperkingen sterk variëren afhankelijk van het type hersenletsel (ouderdom vs. trauma), wat het noodzakelijk maakt om een gepersonaliseerde benadering toe te passen.

- **Personalisatie:** Een belangrijke conclusie uit de interviews was dat personalisatie essentieel is om de effectiviteit van bewegingsprogramma’s te waarborgen. Zowel Bruno als Koen wezen erop dat oefeningen moeten worden aangepast op basis van het individuele niveau van de deelnemer. Dit kan variëren van lichte oefeningen voor mensen met beperkte mobiliteit tot intensievere oefeningen voor mensen die in staat zijn om te staan en zich te verplaatsen. Het ontwerp van het product moet de mogelijkheid bieden om deze niveaus gemakkelijk in te stellen en aan te passen.

- **Zintuiglijke stimulatie:** De impact van het betrekken van meerdere zintuigen werd herhaaldelijk benadrukt. Zowel Bruno als Koen gaven aan dat het brein van ouderen, met name diegenen die te maken hebben met motorische of cognitieve beperkingen, sterker reageert op oefeningen die gebruik maken van verschillende zintuiglijke prikkels, zoals visuele, auditieve en tactiele stimuli. Dit kan bijvoorbeeld worden bereikt door kleuren, geluiden en eenvoudige iconen te integreren in de interface van het product. Bruno raadde specifiek het gebruik van kleuren aan om verschillende oefeningen of posities aan te geven, terwijl Koen de voordelen van het gebruik van iconen in plaats van kleine tekst benadrukte om de leesbaarheid te vergroten.

- **Motivatie:** Een ander belangrijk onderwerp dat naar voren kwam, was de motivatie van de doelgroep. Heleen en Koen gaven aan dat motivatie vaak een uitdaging is, met sommige ouderen die enthousiast zijn over de activiteiten en anderen die weinig interesse tonen. Beide experts benadrukten dat het essentieel is om het product aantrekkelijk te maken, zodat het niet aanvoelt als een verplichting. De suggestie om een puntensysteem of een spelcomponent toe te voegen (zoals een "Bob It"-achtig spel) werd door beiden goed ontvangen. Dit zou deelnemers kunnen motiveren door hen een doel te geven om naar toe te werken en de mogelijkheid te bieden om hun voortgang te meten.

- **Gebruik van smart devices:** Het gebruik van smart devices werd als een potentieel nuttige oplossing gepresenteerd, maar er waren belangrijke beperkingen. Heleen gaf aan dat het voor ouderen moeilijk kan zijn om met technologie om te gaan, vooral wanneer er meerdere kabels of complexe interfaces betrokken zijn. Ze benadrukte dat de interface eenvoudig en gebruiksvriendelijk moet zijn, zodat het product zelfstandig kan worden gebruikt, eventueel met minimale begeleiding. Dit werd ondersteund door Bruno, die aangaf dat het gebruik van een simpele interface en grote knoppen de toegankelijkheid zou verbeteren.

- **De rol van de begeleider:** Begeleiders zijn essentieel in woonzorgcentra om diverse aspecten van zorg te waarborgen. Het is daarom belangrijk dat het product zo ontworpen wordt dat het hen ontlast, zodat zij meer tijd kunnen besteden aan de cruciale taken en senioren niet achteruitgaan door gebrek aan beweging.

- **Benchmark Analyse:** Tijdens ons zoektocht naar verschillende benchmarks viel het op dat sommige producten, zoals de SilverFit, MemoreBox, en Jintronix, een vergelijkbare werking hebben. Deze producten zijn grotendeels virtueel gericht en missen een tastbaar aspect. Koen noemde bijvoorbeeld de Tovertafel, die de zintuigen aanspreekt door spellen te integreren die zowel cognitieve als motorische vaardigheden stimuleren. Ondanks het interactieve karakter van de Tovertafel, blijft het aanbod van tactiele elementen, zoals het aanraken van objecten, beperkt. Dit benadrukt het belang van een product dat zowel visueel als fysiek uitdaagt. Zo werd een ander product genoemd: een interactieve tafel voor groepsspelletjes, zoals schaak, dat kan variëren van eenvoudige tot complexe spellen, en goed aansluit bij de sociale interactie. Koen wees erop dat dergelijke producten ouderen kunnen helpen om cognitieve vaardigheden te behouden, maar wel met een toegankelijke, intuïtieve interface.

### Conclusies:
Het product moet **persoonlijk aanpasbaar** zijn, zodat het verschillende niveaus van fysieke en cognitieve vaardigheden ondersteunt. **Zintuiglijke stimulatie** speelt een cruciale rol, met nadruk op kleurgebruik, visuele iconen en auditieve feedback. **Motivatie** wordt gestimuleerd door gamificatie, bijvoorbeeld door een puntensysteem of competitie tussen gebruikers. De interface moet **gebruiksvriendelijk** zijn, met duidelijke pictogrammen en grote tekst. Het product biedt verschillende niveaus van **flexibiliteit**, waardoor het zowel individueel als in kleine groepen kan worden gebruikt. **Sociale interactie** en samenwerking worden bevorderd door groepsactiviteiten en spellen met spelelementen, zoals de interactieve tafel.

Met deze inzichten is de basis gelegd voor een effectief en toegankelijk product dat ouderen met motorische beperkingen helpt fysiek actief te blijven.  


<p align="center">
  <img src="/images/IMG_1390.JPEG" width="49%">
  <img src="/images/Schermafbeelding%202024-12-07%20154620.png" width="49%">
    
</p>



## Definition (N=12)
De _definition_ fase heeft als doel om duidelijke richtlijnen en specificaties op te stellen voor het ontwerp en de functionaliteit van Selico. Dit wordt gedaan door inzichten uit de gebruikstesten te analyseren en deze om te zetten in concrete ontwerp- en ontwikkelbeslissingen.
### Doelstellingen
Een conctrete en gebruiksvriendelijke methode bekomen om informatie tussen kinesiste en gebruiker uit te wisselen.
Een finaal conceptueel ontwerp bekomen.
### Materiaal & methoden
- _quick-and-dirty_ prototype variaties van mat en interface
- 4 ledlichtjes manueel te bedienen
- app prototype variaties
- gebruikersinterviews
- gebruikerstesten
### Resultaten
Rapporteer over de resultaten (incl. foto's, quotes, analyseframeworks, ...)
### Conclusies & implicaties
Definieer de belangrijkste designbeslissingen

>  [!IMPORTANT]
> Design Requirements:
> - tekst
> - tekst

## Bill of materials
- Welk
- Materiaal
- Heb
- Je
- Nu
- Nodig
- Voor
- Je
- Prototype

## Kritische reflectie
Max. 500 woorden

## Bronnen
Voeg je volledige bibliografie toe van bronnen naarwaar je verwees.

## Bijlagen
- **Discovery**
    - protocols
      - [protocol Bruno](https://ugentbe-my.sharepoint.com/:w:/g/personal/bojan_ronsijn_ugent_be/EeeWNA0WPgZAsyY5EEk4OJoBnG59VDVQjlWM_IEu12ziGQ?e=hTRWiw)  
      - [protocol Koen](https://onedrive.live.com/personal/7c166ebc891b2cd7/_layouts/15/Doc.aspx?sourcedoc=%7B746bfa2d-9e8a-4560-8be3-04736148c3b5%7D&action=default&redeem=aHR0cHM6Ly8xZHJ2Lm1zL3cvYy83YzE2NmViYzg5MWIyY2Q3L0VTMzZhM1NLbm1CRmktTUVjMkZJdzdVQngtSzBoSEpPdzBSUnNLdzVibUpOTWc_ZT1TaUl0YVQ&slrid=d03c6ba1-607e-6000-089b-34a2f6224374&originalPath=aHR0cHM6Ly8xZHJ2Lm1zL3cvYy83YzE2NmViYzg5MWIyY2Q3L0VTMzZhM1NLbm1CRmktTUVjMkZJdzdVQngtSzBoSEpPdzBSUnNLdzVibUpOTWc_cnRpbWU9UFpJdmVjOFczVWc&CID=875b781f-a8c8-4f2b-b976-8b17b4a1bc0d&_SRM=0:G:47)  
      - [protocol Heleen](https://ugentbe-my.sharepoint.com/:w:/g/personal/bojan_ronsijn_ugent_be/ES4MZEchvepBls7GbUzu8uMBZr2KhHYPHu1iwPh676ioBw?e=eqPxfc)
      - [protocol benchmark-analyse](https://ugentbe-my.sharepoint.com/:w:/g/personal/bojan_ronsijn_ugent_be/ESdxSERj3LFKrdyYvtYcxLwBVabwBSCOS9_h8qzEBTmUwg?e=UaAx3w)
      - [protocol Design ethnography](https://ugentbe-my.sharepoint.com/:w:/g/personal/bojan_ronsijn_ugent_be/ESf16aIQR3NNqxQzOnJgagIBq8hPXHvNMrUJn1plxpLOcg?e=PJWCEV)

    - reports
      - [report Bruno](https://ugentbe-my.sharepoint.com/:w:/g/personal/bojan_ronsijn_ugent_be/Ee0RgxqAiUJHuObgjKCTFoIBWjQMaXDDnpY-mYWMVj5KSg?e=zcwUNe)
      - [report Koen](https://ugentbe-my.sharepoint.com/:w:/g/personal/bojan_ronsijn_ugent_be/Eb5akRwx1EFDgLtshaN8pfwBvc9m9OwPmZm85oWbvJYgQg?e=m1q4BL)
      - [report Heleen](https://ugentbe-my.sharepoint.com/:w:/g/personal/bojan_ronsijn_ugent_be/Eex1E2hSVhhDtkLlPwjKTxgBzzJCHWmrUyNa5yPFgqQUjA?e=NBjVTs)
      - [report benchmark-analyse](https://ugentbe-my.sharepoint.com/:w:/g/personal/bojan_ronsijn_ugent_be/ESvNCrzs3itHsM2775gqn1oBshy27IsrXXR007vszGeNiA?e=hcWYwF)
      - [report Design ethnography](https://ugentbe-my.sharepoint.com/:w:/g/personal/bojan_ronsijn_ugent_be/ETITIzkx51lOpXYVTpnf9pkBVG9VxxgLL5VEyRNWKu__jA?e=YWsT41)

- **Definition**
