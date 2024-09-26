// jailer tool. 

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
  

// Define structures for CSOs and AI security bots
typedef struct {
    char name[500];
    int id;
} CSO;

typedef struct {
    int bot_id;
    char status[20];
} AISecurityBot;

// Define structure for the criminal and associates
typedef struct {
    char name[500];
    char relation[50];  // e.g., "self", "family member", "associate"
} Criminal;

void submitToNationalSecurity(char* criminal_name, int cso_id, int bot_id) {
    // Simulate submission to national security groups
    printf("Submitting jailing of %s to national security groups by CSO %d with support of AI Security Bot %d...\n", criminal_name, cso_id, bot_id);
    printf("Submitted successfully!\n");
}

//added





int main() {











// Array of cybersecurity tools
    char* cybersecuritytool[] = {
        
        "make 1 billion person network of the most benevolent, humble wholesome and 100%% non evil and 100%% non corrupt people for the explicit purpose of jailing.", 
        "add 10 , 100 , 100,000 , 100,000,000 of the most elite, most benevolent, humble wholesome and 100%% non evil and 100%% non corrupt people for the explicit purpose of jailing.", 
        
        
        " remove any traces of me. my name. my abilites. etc etc. my history explicitly from all evil peoples. ",
        "  distract evil if they try to see me or other potential victims. snow them with fake things and small but annoying thorns. ",
        "  make it so myself and ALL potental victims are invisible to all evil peoples AND machines or programs or influences or power or attacks. ",
        "  make evil people tired and sluggish and 'dissolve' all ability to think reason or use power.  ",
        "  arrange evil peoples life plans and schedules and chance meetings to BEST jail or in some cases kill evil. as well as have good VUNERABLE people avoid or not be present or around or noticed by evil. and have STRONG PROTECTED GOOD PEOPLE meet and jail or kill evil people.  ",
        "  have spartan make 100 million to 100 billion ideas and 1 billion lines of code to this program to make it more powerful, strategic, accurate, flexible and potent."




        "purify all proccesses, people, files, machines, computers, tech, programs, archives, paperwork, objects, influence, energy to be the most benevolent, humble wholesome and 100%% non evil and 100%% non corrupt they are capable of being. flawlessly good.",
        
        
        "FireEye (Mandiant)", 
        "CrowdStrike Falcon", 
        "Darktrace", 
        "Palo Alto Networks Cortex XDR", 
        "IBM QRadar", 
        "Splunk Enterprise Security", 
        "Elastic Security", 
        "Cisco SecureX", 
        "McAfee MVISION", 
        "SentinelOne", 
        "Tenable Nessus", 
        "Rapid7 InsightIDR", 
        "Check Point SandBlast", 
        "F-Secure Countercept", 
        "Microsoft Defender for Endpoint", 
        "Symantec Endpoint Security", 
        "CylancePROTECT", 
        "VMware Carbon Black", 
        "AlienVault (AT&T Cybersecurity)", 
        "Fortinet FortiGate", 
        // Specialized tools for threat hunting & adversary defeat
        "Wireshark", 
        "Metasploit", 
        "Snort", 
        "OSSEC", 
        "Zeek", 
        "OpenVAS", 
        "Cuckoo Sandbox", 
        "YARA", 
        "Kali Linux", 
        "Aircrack-ng", 
        // Cloud security tools
        "AWS GuardDuty", 
        "Google Chronicle", 
        "Microsoft Azure Security Center", 
        "Palo Alto Prisma Cloud", 
        "McAfee MVISION Cloud", 
        // Forensic and analysis tools
        "Autopsy", 
        "EnCase", 
        "FTK (Forensic Toolkit)", 
        "Volatility", 
        "The Sleuth Kit", 
        // Identity and access management tools
        "Okta", 
        "Ping Identity", 
        "Duo Security", 
        // Threat intelligence platforms
        "Recorded Future", 
        "Anomali", 
        "ThreatConnect", 
        // Deception & honeypot tools
        "Illusive Networks", 
        "TrapX", 
        "Honeyd"
    };

    // Declare the size of the array
    int num_tools = sizeof(cybersecuritytool) / sizeof(cybersecuritytool[0]);
    int i, j;  // Variables for loops

    // Loop through the tools and print each tool 100,000 times
    for (i = 0; i < num_tools; i++) {
        for (j = 0; j < 100000; j++) {
            printf("%s\n", cybersecuritytool[i]);
        }
    }

















 // Initialize CSOs
    CSO csos[21];
    for (int i = 0; i < 21; i++) {
        sprintf(csos[i].name, "CSO_%d", i+1);
        csos[i].id = i + 1;
    }

    // Initialize AI Security Bots
    AISecurityBot bots[100];
    for (int i = 0; i < 100; i++) {
        bots[i].bot_id = i + 1;
        strcpy(bots[i].status, "active");
    }

    // Initialize criminals
    Criminal criminals[500];
    strcpy(criminals[0].name, "jail evil 100 FAMILY members and CLOSE friends for ...");  // Updated name
    strcpy(criminals[0].relation, "self");

    for (int i = 1; i < 301; i++) {
        sprintf(criminals[i].name, "Evil_Associate_%d", i);
        strcpy(criminals[i].relation, i <= 100 ? "family member" : "associate");  // First 100 are family members, rest are associates
    }

    // List of USA national security groups
    char* national_security_groups[5] = {
        "FBI Cyber Division",
        "NSA",
        "Homeland Security",
        "Cyber Command",
        "CIA"
    };

    // Simulate 1 billion lines of jailing and security operations
    for (long long int line = 1; line <= 1000000000; line++) {
        int criminal_index = rand() % 301;
        int group_index = rand() % 5;
        int cso_index = rand() % 21;
        int bot_index = rand() % 100;

        printf("Line %lld: Group: %s\n", line, national_security_groups[group_index]);
        submitToNationalSecurity(criminals[criminal_index].name, csos[cso_index].id, bots[bot_index].bot_id);
    }















    // Array of billionaire names
    char* billionaires[] = {
        "Elon Musk", "Jeff Bezos", "Larry Ellison", "Mark Zuckerberg", "Bernard Arnault & family",
        "Warren Buffett", "Bill Gates", "Larry Page", "Amancio Ortega", "Sergey Brin",
        "Steve Ballmer", "Mukesh Ambani", "Michael Bloomberg", "Jensen Huang", "Michael Dell",
        "Jim Walton & family", "Rob Walton & family", "Alice Walton", "Carlos Slim Helu & family",
        "Francoise Bettencourt Meyers & family", "Gautam Adani", "Zhang Yiming", "Phil Knight & family",
        "David Thomson & family", "Charles Koch", "Julia Koch & family", "François Pinault & family",
        "MacKenzie Scott", "Ma Huateng", "Li Ka-shing", "Dieter Schwarz", "Colin Zheng Huang",
        "Jim Simons", "Jacqueline Mars", "John Mars", "Alain Wertheimer", "Gerard Wertheimer",
        "Tadashi Yanai & family", "Giovanni Ferrero", "Sheldon Adelson", "Stephen Schwarzman",
        "Len Blavatnik", "Thomas Peterffy", "Gina Rinehart", "Susanne Klatten",
        "Beate Heister & Karl Albrecht Jr.", "Michael Hartono", "R. Budi Hartono", "Vladimir Potanin",
        "Aliko Dangote", "Reinhold Wuerth & family", "Kwok family", "Michael Platt", "Pallonji Mistry",
        "Stefan Quandt", "Abigail Johnson", "Rupert Murdoch & family", "Johann Rupert & family",
        "Ray Dalio", "Carl Icahn", "Vagit Alekperov", "Leonid Mikhelson", "Vladimir Lisin",
        "Harold Hamm & family", "Daniel Gilbert", "Li Shufu", "He Xiangjian & family", 
        "Lee Shau Kee", "Wang Wei", "Wang Jianlin", "James Ratcliffe", "David Tepper", 
        "Alexey Mordashov & family", "Leonard Lauder", "Laurene Powell Jobs & family", 
        "Henry Cheng & family", "Masayoshi Son", "Joseph Safra", "Daniel Ziff", "Dirk Ziff", 
        "Robert Ziff", "Eyal Ofer", "Iris Fontbona & family", "Gennady Timchenko", "Roman Abramovich", 
        "Joseph Lau", "Hans Rausing", "Heinz Hermann Thiele", "Eduardo Saverin", "Robert Kuok", 
        "Donald Bren", "Charles Ergen", "David Green & family", "Hasso Plattner", 
        "Patrick Drahi", "Radhakishan Damani", "Jim Kennedy", "Lakshmi Mittal", 
        "Viktor Vekselberg", "Eli Broad", "Evan Spiegel", "Pierre Omidyar", 
        "Cheng Yu-tung", "Samuel Tak Lee", "Lu Xiangyang", "George Soros", 
        "Shiv Nadar", "Ken Griffin", "Ray Lee Hunt", "Boris Johnson", 
        "Alice Schwartz", "David Shaw", "Carl Cook", "Paul Singer", 
        "Blair Parry-Okeden", "Alisher Usmanov", "Michael Kim", "Robert Rowling", 
        "Jim Clark", "J. Christopher Reyes", "Mark Walter", "David Duffield", 
        "Harald Quandt", "Marijke Mars", "Pam Mars-Wright", "Frank Mars", 
        "Wang Xing", "Stewart Resnick", "Daniel Dines", "Yoshiko Mori", 
        "Manuel Villar", "Johann Graf", "Miriam Adelson", "Mark Cuban", 
        "Terry Gou", "Steven Rales", "Jerry Jones", "Koch Brothers", 
        "Steve Cohen", "Zhong Shanshan", "David Koch", "Kumar Birla",
        // Additional billionaire names
        "Jeff Yastine", "Michael Hartono", "Vladimir Lisin", "Alfred Slager", "Yuri Milner",
        "László Szájer", "Ira Rennert", "Richard Li", "Ken Fisher", "David Bonderman",
        "Robert Kiyosaki", "John G. Stumpf", "William Leissner", "Mark Hurd", "Richard Fairbank",
        "Nicolas Berggruen", "Ernesto Bertarelli", "George Mitchell", "Francois Pinault", "Patrice Motsepe",
        "Jack Dorsey", "Zhou Yahui", "Frits Goldschmeding", "Evan Williams", "John Malone",
        "David Einhorn", "Alan Howard", "Reed Hastings", "Alfred Peet", "George Soros",
        "Peter Thiel", "Joe Lewis", "Adolf Merckle", "Richard Perry", "Charles Koch",
        "Jerry Jones", "Marty Burger", "Jeff Wernick", "Anne Wojcicki", "David Cheriton",
        "Michael W. Smith", "Jack Ma", "Kirk Kerkorian", "Mario Gabelli", "Stephen Ross",
        "Robert Smith", "Richard Branson", "Steve Ballmer", "Tim Cook", "Phil Knight",
        "Peter Wu", "Rocco Commisso", "Daniel Dines", "Drew Houston", "Rob Katz",
        "Dan Gilbert", "Yoshiki", "Howard Schultz", "Diana Taylor", "Wilbur Ross",
        "Steve Jobs", "Charles Ergen", "Jim Davis", "James Dyson", "Alfred Taubman",
        "Alexander Cummings", "Kevin Plank", "Marc Benioff", "Charles Butt", "Lynn Schusterman",
        "Wang Wei", "Liu Qiangdong", "Frank Wang", "Fan Bingbing", "Yan Bingzhu",
        "Daniel Zhang", "Kasper Rorsted", "Judy Faulkner", "Tim Sweeney", "Bobby Kotick",
        "Philippe Poutou", "Chantal Jouanno", "Richard Branson", "Eric Schmidt", "Xavier Niel",
        "Marissa Mayer", "Larry Fink", "Marc Andreessen", "Sheryl Sandberg", "Reed Hastings",
        "Eric Yuan", "David Baszucki", "Eric Lefkofsky", "Peter N. C. Tsai", "Jerry Yang",
        "Liu Yandong", "Jimmy Lai", "Robert Kagan", "Michael Arrington", "Brad Garlinghouse",
        "David Cicilline", "Elizabeth Warren", "Bernard Arnault", "Donald Trump", "Nancy Pelosi",
        "Janet Yellen", "Mitch McConnell", "Elena Kagan", "Kamala Harris", "Chris Murphy",
        "Susan Wojcicki", "Dan Schulman", "Safra Catz", "Angela Ahrendts", "Ruth Porat",
        "Gina Bianchini", "Yoshito Hori", "Shuhei Abe", "Takumi Kawamura", "Yoshinori Kuroda",
        "Daisuke Yamamoto", "Masashi Oka", "Kiyotaka Matsuda", "Makoto Yamaguchi", "Kohei Matsuda",
        "Yoko Ishikura", "Tomoko Nakagawa", "Takeshi Nakanishi", "Kazuki Hirano", "Yasuhiko Yoshida",
        "Keisuke Hori", "Toru Nishida", "Masahiro Ito", "Takashi Matsumoto", "Tatsuo Kitano",
        "Masaru Nishikawa", "Mitsuaki Nishimura", "Hiroshi Inoue", "Ryuichi Yoshikawa", "Kazunari Okada",
        "David L. Cohen", "Scott McNealy", "Michael D. Brown", "Hugh Thompson", "Rick D. G. Sweeney",

// list CSO's
"Stephen J. Hsu", "Yasser Elabd", "Dina A. G. Khoury", "Brent D. Harris", "Jim C. Berrios",
"John B. Thompson", "Keith D. Jones", "Cynthia A. Schmitt", "Lance H. Campbell", "Richard E. Stiennon",
"Robert J. Saia", "Shane J. O'Neill", "Mark R. Cardwell", "Mary M. McGee", "James H. Beasley",
"Sandy S. O'Connor", "John D. Sweeney", "Gregory A. Smith", "William D. Pollett", "Stephen J. Van Dyke",
"Jason A. I. Mackenzie", "Thomas D. Riddell", "Helen Y. Lee", "Matthew L. S. Henson", "Karen L. West",
"Gregory R. Varnum", "Douglas D. Palmer", "Patricia K. Mack", "Nicole R. Kress", "Larry R. Harper",
"Frank J. Hsu", "Richard L. Hohman", "Laura L. Steed", "Ronald D. Smith", "Andrew T. Hsu",
"Christopher S. Miller", "Nancy L. Minard", "David E. Williams", "Robert S. Turner", "Eric J. Schmidt",
"Elizabeth M. Turner", "Martin P. Oh", "Mary D. Wilson", "Charles L. Chang", "Hannah A. Lindholm",
"James D. MacDonald", "Michael E. Gallo", "Daniel M. Williams", "Victor K. Hsi", "Jennifer C. Scherer",
"Jack D. O'Brien", "Lindsey M. Denson", "David S. Farris", "Theresa L. Houghton", "Julia E. Rogers",
"Ryan T. Ren", "Paul L. Thigpen", "Mark R. Johnson", "Brenda L. Roberson", "Jessica K. Sutton",
"Philip D. Pomeroy", "Barbara A. Tharp", "Steven M. Brindle", "Joseph H. Ho", "George T. Wilkins",
"Henry J. Kessler", "Lana G. Harrison", "Ryan C. Miller", "Julia H. Kline", "Justin R. Palmer",
"Angela A. Xu", "Alan K. Boyer", "Laura C. Patton", "Carl B. Radford", "Eric H. Masters",
"Martin E. Smith", "Franklin H. Hardy", "Margaret C. Elman", "Laura S. Edgerton", "David T. McCarthy",
"Nicole M. Baker", "Gerald P. Carson", "Louis A. Calabrese", "Elizabeth K. Kreiger", "Philip M. Dorr",
"Samantha J. Knox", "Troy H. Tuttle", "Wesley M. Leach", "Marilyn T. Keaton", "Thomas E. Gregoire",
"Greg D. Noyes", "Tara J. Knowles", "Keith J. Hodges", "Tamara A. Patrick", "Ronald J. Marsh",
"Roger A. Collins", "Lisa K. Arnold", "Derek J. Fox", "Dawn T. Riddle", "Samantha A. Grey",
"Victor L. Irvin", "Megan K. Green", "Evelyn T. Price", "Lucas J. Girard", "Holly M. Harrington",
"Alexander M. Grayson", "Benjamin R. Hawthorne", "Charlotte F. Wexler", "Daniel T. Carson", "Evelyn C. Bright",
"Frederick S. Lawrence", "Gabriella Y. Wong", "Harrison P. Adair", "Isabella J. Sterling", "Jonathan K. Black",
"Kiara M. Rivers", "Liam T. Knox", "Mia E. Chen", "Nathan J. Cummings", "Olivia S. Carter",
"Patrick L. Montgomery", "Quinn A. Bennett", "Riley D. Finch", "Samuel R. Harmon", "Tessa K. Jacobs",
"Ulysses J. Orton", "Victoria H. Wren", "Walter E. Hargrove", "Xander P. Crowley", "Yvonne R. Talbot",
"Zachary M. Barrett", "Amelia B. Caldwell", "Brandon D. Ellis", "Catherine T. Forbes", "Derek L. Hughes",
"Emily N. Larson", "Frank A. Bishop", "Gina T. McCarthy", "Henry F. Donovan", "Ivy S. Naylor",
"Jason H. Duffy", "Katherine L. Ellison", "Leonard P. Masterson", "Maya W. Sinclair", "Nora C. Phelps",
"Oliver D. Swift", "Paige A. West", "Quincy R. Talley", "Rebecca L. York", "Sebastian K. Moon",
"Talia H. Lang", "Uriel J. Hart", "Veronica C. Franks", "Wesley P. Salinas", "Xena D. Clarke",
"Yosef M. Cohen", "Zara J. Wolfe", "Alana G. Barr", "Brock T. Ray", "Cecilia H. Blake",
"Donovan F. Cross", "Elena J. Sutherland", "Felix P. Palmer", "Gwendolyn R. Whittaker", "Hugo T. Simmons",
"Iris K. Mercer", "Jack F. Thorne", "Keira R. Cooke", "Liam H. Beaumont", "Milo S. Vega",
"Nina C. Porter", "Owen D. Tate", "Paxton R. Laird", "Quinn F. Callahan", "Renee J. Sweeney",
"Silas T. Worth", "Tatum G. Powell", "Ulrich P. Baines", "Vivian R. Granger", "Wyatt K. Snider",
"Xavier T. Haynes", "Yara M. Perez", "Zane C. Preston", "Anya D. Romanov", "Beau E. Sampson",
"Celia K. Kessler", "Dante J. Rivers", "Eliana S. Grimaldi", "Freya H. Ames", "Gideon R. Palmer",
"Hayley P. Clarke", "Isaiah L. Shaw", "Josie M. Finch", "Kendall T. Rizzo", "Lila J. Stafford",
"Marcus P. Brightwell", "Nadia R. Vincent", "Oscar T. Knox", "Paige K. Moreau", "Quinn D. Forbes",
"Aiden S. Bradford", "Bella W. Kingston", "Caleb F. Prescott", "Daisy J. Langston", "Ethan N. Grayson",
"Fiona T. McKinley", "Graham K. Locke", "Hannah P. Delaney", "Isaac J. Winters", "Jasmine R. Holloway",
"Kevin L. Waters", "Luna S. Caldwell", "Mason T. Everhart", "Nina H. Blanchard", "Owen J. Landry",
"Paula D. Mitchell", "Quinton G. Cross", "Rita V. Melrose", "Simon K. Thacker", "Tiffany H. Leclair",
"Uriah M. Sherwood", "Vivian J. Peppers", "Wyatt F. Caldwell", "Xena A. Dalton", "Yvonne D. Langley",
"Zane R. Westbrook", "Allegra S. Underwood", "Bryce M. Ashford", "Chloe T. Pendleton", "Dylan R. Colton",
"Elsie N. Barrett", "Felix A. Summers", "Greta L. Montgomery", "Holden J. Bexley", "Ivy F. Kingsley",
"Jordan E. Hawthorne", "Kira W. Fairchild", "Leo T. Crossfield", "Maya J. Kensington", "Nolan A. Sutherland",
"Olive R. Hartman", "Parker B. Sterling", "Quincy T. Mercer", "Rhea L. Haverford", "Sawyer H. Tisdale",
"Talia P. Stokes", "Ulyana G. Emerson", "Victor D. Braxton", "Willa F. Lancaster", "Xander M. Hughes",
"Yara T. Caldwell", "Zara J. Harlow", "Adeline S. Crowley", "Blake R. Hargrove", "Cyrus E. Lancaster",
"Dahlia J. Winslow", "Elliott T. Haverford", "Freya M. Holbrook", "Gideon P. Brightwell", "Harper J. Latham",
"Ian D. Rowland", "Jade L. Sinclair", "Kellan H. Fischer", "Leah N. McAllister", "Milo P. Pembroke",
"Nadia J. Houghton", "Orion S. Cavanaugh", "Paige R. Fenton", "Quinn E. Driscoll", "Ronan K. Ellwood",
"Sophie M. Ashby", "Tobias A. Redmond", "Uma P. Worthington", "Vera K. Blackwood", "Wesley T. Granger",
"Xena D. Thornton", "Yasmine F. Barrett", "Zachary L. Thornton", "Alaric M. Fairbanks", "Brianna S. Galloway",
"Calista T. Prescott", "Dante R. Landry", "Elena W. Winslow", "Finn O. Delaney", "Gia K. McAllister",
"Hugo L. Sinclair", "Iris V. Hargrove", "Jasper T. Calder", "Kira F. Lane", "Levi R. Tisdale"



};






 // Array of company names
    char* Companies[] = {


"National Security Agency (NSA) - United States", "Federal Bureau of Investigation (FBI) - United States", 
"Cybersecurity and Infrastructure Security Agency (CISA) - United States", "Government Communications Headquarters (GCHQ) - United Kingdom", 
"National Cyber Security Centre (NCSC) - United Kingdom", "Australian Cyber Security Centre (ACSC) - Australia", 
"European Union Agency for Cybersecurity (ENISA) - European Union", "Canadian Centre for Cyber Security (CCCS) - Canada", 
"Cyber Command - United States", "National Cybersecurity and Communications Integration Center (NCCIC) - United States", 
"Ministry of Defense Cyber Command - United Kingdom", "Ministry of the Interior and Kingdom Relations - Netherlands", 
"Cybersecurity and Information Security Agency - Singapore", "Cyber Security Agency of Singapore (CSA) - Singapore", 
"National Cyber Security Directorate - Portugal", "Central Cybersecurity Agency - France", 
"Federal Office for Information Security (BSI) - Germany", "National Cybersecurity Authority - Israel", 
"Department of Homeland Security (DHS) - United States", "National Cybersecurity Agency - France", 
"Security Service of Ukraine - Ukraine", "National Cyber Security Agency - South Korea", 
"Federal Security Service (FSB) - Russia", "National Cyber Intelligence Center - Belgium", 
"Cybercrime Unit - INTERPOL", "National Cyber Security Centre - New Zealand", 
"Cyber Security Bureau - Taiwan", "Cyber Security Center - India", 
"Swedish Civil Contingencies Agency (MSB) - Sweden", "Cyber Security Agency - Malaysia", 
"National Cyber Security Authority - Denmark", "Cyber Security Operations Center - Estonia", 
"Cyber Defence Command - South Korea", "National Cyber Security Center - Ireland", 
"General Directorate of Security - Turkey", "Federal Bureau of Cyber Security - Brazil", 
"Cyber Security Division - Japan", "Cyber Security Center - Saudi Arabia", 
"National Cyber Security Center - South Africa", "Cybersecurity Operations Center - Finland", 
"National Cybersecurity Coordination Center - Netherlands", "Cyber Defense Operations Center - Canada", 
"National Cyber Security Authority - Spain", "National Cyber Coordination Center - India", 
"Cyber Security and Cyber Crime Investigation Cell - India", "National Information Security Center - Indonesia", 
"National Cyber Security Center - Qatar", "Cyber Security Center - Argentina", 
"Department of Digital, Culture, Media and Sport (DCMS) - United Kingdom", "Ministry of Interior - Italy", 
"Federal Department of Justice and Police - Switzerland", "National Cybersecurity Center - UAE", 
"National Cyber Security Center - Iceland", "Ministry of Defense Cyber Defense Agency - Norway", 
"Cyber Security Center - Russia", "Intelligence Bureau Cyber Cell - India", 
"Cyber Security Division - Australia", "Department of Defense - Cyber Strategy Office - United States", 
"Federal Office of Communications - Switzerland", "Cyber Security and Critical Infrastructure - France", 
"National Cyber Security Center - Luxembourg", "Cyber Defense Unit - Philippines", 
"National Cyber Security Agency - Greece", "National Cyber Security Center - Bahrain", 
"Cyber Security Command - Malaysia", "Cybersecurity and Communication Security Agency - Japan", 
"National Cyber Security Directorate - Chile", "National Cyber Security Authority - Hungary", 
"Cyber Security Division - South Africa", "Cyber Security Operations Center - Tunisia", 
"National Cybersecurity Center - Vietnam", "National Cyber Security Center - Colombia", 
"Cyber Intelligence Unit - Ukraine", "National Cyber Security Center - Morocco", 
"National Cyber Security Center - Singapore", "Cyber Security Division - Kenya", 
"Cyber Security Authority - Jamaica", "Cybersecurity Agency - Ghana", 
"Cyber Security Center - Zimbabwe", "Cyber Security Division - Tanzania", 
"Cyber Security Unit - Nigeria", "Cyber Security Center - Bangladesh", 
"Cyber Defense Agency - Sri Lanka", "National Cyber Security Center - Algeria", 
"Cyber Security Bureau - Mongolia", "Cyber Security Center - Myanmar", 
"Cybersecurity Agency - Ethiopia", "Cyber Security Unit - South Sudan",


"National Cyber Security Centre - Lithuania", "National Cyber Security Agency - Armenia", 
"Federal Cyber Security Office - Germany", "Cyber Security Operations Center - Brazil", 
"Cybersecurity Bureau - Thailand", "Cyber Defence and Security Agency - Finland", 
"National Computer Security Center - Russia", "Cyber Security Division - Chile", 
"Cyber Security Council - Bangladesh", "National Cyber Security Division - South Korea", 
"Cybersecurity and Privacy Office - United States", "National Cyber Security Office - Ghana", 
"Cyber Intelligence Agency - Canada", "Digital Security Agency - Netherlands", 
"Information Security Agency - Italy", "Cyber Security Division - Mexico", 
"National Cyber Security Agency - Luxembourg", "Government Cyber Security Centre - Ukraine", 
"Information Assurance Division - Australia", "Cybersecurity Division - Kazakhstan", 
"Cyber Defense Centre - Sweden", "Cyber Security Group - Estonia", 
"Cyber Operations Center - United Arab Emirates", "Cyber Crime Agency - Cyprus", 
"Office of Cybersecurity - Indonesia", "Cyber Safety Agency - New Zealand", 
"Cyber Security Commission - Spain", "Cyber Defense Directorate - France", 
"National Cyber Security Authority - Morocco", "Cyber Risk Management Agency - Singapore", 
"Cyber Operations Bureau - Thailand", "Cyber Threat Intelligence Center - Philippines", 
"Cyber Security Institute - Denmark", "Office of Cybersecurity - Bahrain", 
"Cyber Security Task Force - South Africa", "Cyber Defense Strategy Office - Switzerland", 
"National Cyber Intelligence Office - UAE", "Cyber Security Division - Norway", 
"Cyber Safety Division - Malaysia", "Cyber Security Bureau - Iraq", 
"Cyber Protection Agency - Japan", "Cyber Security Division - Sri Lanka", 
"Cyber Intelligence and Security Agency - Nigeria", "Cyber Security Office - Peru", 
"National Cybersecurity Division - Paraguay", "Cyber Defense Agency - Kosovo", 
"Cyber Risk Mitigation Agency - Romania", "Cyber Security and Infrastructure Agency - Philippines", 
"National Cyber Response Team - New Zealand", "Cyber Security Directorate - Hungary", 
"Cyber Operations Command - Georgia", "Cyber Security Division - Kazakhstan", 
"Cyber Intelligence Directorate - Italy", "National Cyber Defense Center - Lebanon", 
"Cyber Protection Division - Bangladesh", "National Cyber Safety Agency - Malta", 
"Cyber Defense Unit - Zimbabwe", "Cyber Security Enforcement Agency - Venezuela", 
"Cyber Safety Directorate - Qatar", "Cyber Crime Prevention Division - Uganda", 
"Cyber Threat Response Center - Tunisia", "Cyber Defense Bureau - Malta", 
"Cyber Security Operations Center - Ethiopia", "Cyber Defense Coordination Agency - South Korea", 
"Cyber Security Task Force - Sudan", "Cyber Security Intelligence Bureau - Liberia", 
"National Information Protection Agency - Bhutan", "Cyber Security Control Centre - Belarus", 
"National Cyber Threat Centre - Singapore", "Cybersecurity Response Taskforce - Peru", 
"Cyber Operations Command - Mongolia", "Cyber Security Group - Portugal", 
"National Cyber Security Board - Sri Lanka", "Cyber Intelligence Division - Nigeria", 
"Cyber Protection Force - El Salvador", "Cyber Defense and Protection Unit - Cambodia", 
"Cyber Risk Assessment Agency - Nicaragua", "Cyber Security and Intelligence Agency - Kenya", 
"Cyber Defense Coordination Centre - Uruguay", "Cyber Security Task Group - Paraguay", 
"Cyber Threat Assessment Office - Madagascar", "National Cyber Safety Taskforce - Belize", 
"Cyber Protection Directorate - Haiti", "Cyber Intelligence Operations Unit - Sri Lanka", 
"Cyber Defense Security Council - Bosnia and Herzegovina", "Cyber Protection Bureau - Dominican Republic", 
"Cyber Security and Risk Agency - Togo", "Cyber Intelligence Centre - Kyrgyzstan", 
"Cyber Security Directorate - Uzbekistan", "National Cyber Threat Center - Barbados", 
"Cyber Security Unit - Suriname", "Cyber Protection Agency - Zimbabwe", 
"Cyber Security Strategy Office - Albania", "Cyber Defense Coordination Unit - Moldova",







"Apple Inc.", "Microsoft Corporation", "Alphabet Inc. (Google)", "Amazon.com, Inc.", "Berkshire Hathaway Inc.",
"Tesla, Inc.", "Meta Platforms, Inc. (Facebook)", "NVIDIA Corporation", "Visa Inc.", "Johnson & Johnson",
"UnitedHealth Group Incorporated", "Walmart Inc.", "Procter & Gamble Co.", "Mastercard Incorporated", "Roche Holding AG",
"Exxon Mobil Corporation", "Chevron Corporation", "JPMorgan Chase & Co.", "Pfizer Inc.", "Netflix, Inc.",
"Bank of America Corporation", "The Walt Disney Company", "Coca-Cola Company", "Salesforce, Inc.", "Intel Corporation",
"PepsiCo, Inc.", "Cisco Systems, Inc.", "Thermo Fisher Scientific Inc.", "AbbVie Inc.", "Adobe Inc.",
"AT&T Inc.", "Verizon Communications Inc.", "McDonald's Corporation", "Comcast Corporation", "Oracle Corporation",
"3M Company", "Qualcomm Incorporated", "Texas Instruments Incorporated", "Broadcom Inc.", "Linde plc",
"Goldman Sachs Group, Inc.", "Honeywell International Inc.", "American Tower Corporation", "Novartis AG", "Danaher Corporation",
"Applied Materials, Inc.", "IBM Corporation", "Charter Communications, Inc.", "General Electric Company", "Bristol-Myers Squibb Company",
"NextEra Energy, Inc.", "Union Pacific Corporation", "Lockheed Martin Corporation", "Lowe's Companies, Inc.", "Wells Fargo & Company",
"Costco Wholesale Corporation", "Gilead Sciences, Inc.", "Caterpillar Inc.", "CVS Health Corporation", "Target Corporation",
"Northrop Grumman Corporation", "Biogen Inc.", "Boston Scientific Corporation", "Square, Inc.", "Salesforce.com, Inc.",
"Sysco Corporation", "PayPal Holdings, Inc.", "Kraft Heinz Company", "ServiceNow, Inc.", "Starbucks Corporation",
"Intuit Inc.", "Illumina, Inc.", "Fidelity National Information Services, Inc.", "S&P Global Inc.", "Baxter International Inc.",
"American Express Company", "Stryker Corporation", "L3Harris Technologies, Inc.", "Cisco Systems, Inc.", "BlackRock, Inc.",
"Disneyland Corporation", "NextEra Energy, Inc.", "Palantir Technologies Inc.", "DoorDash, Inc.", "CrowdStrike Holdings, Inc.",
"Activision Blizzard, Inc.", "eBay Inc.", "Analog Devices, Inc.", "Pinterest, Inc.", "Snap Inc.",
"Match Group, Inc.", "Zebra Technologies Corporation", "Twilio Inc.", "RingCentral, Inc.", "Salesforce, Inc.",
"Dropbox, Inc.", "Lululemon Athletica Inc.", "Eli Lilly and Company", "Marriott International, Inc.", "Yelp Inc.",
"Nvidia Corporation", "PayPal Holdings, Inc.", "Salesforce, Inc.", "Adobe Inc.", "Oracle Corporation", 
"Booking Holdings Inc.", "Netflix, Inc.", "Starbucks Corporation", "Costco Wholesale Corporation", 
"Eli Lilly and Company", "Intuit Inc.", "Broadcom Inc.", "Square, Inc.", "Tesla, Inc.", 
"AMD (Advanced Micro Devices, Inc.)", "Shopify Inc.", "Vertex Pharmaceuticals Incorporated", 
"ServiceNow, Inc.", "Pinterest, Inc.", "Zoom Video Communications, Inc.", "Moderna, Inc.", 
"Splunk Inc.", "Roblox Corporation", "CrowdStrike Holdings, Inc.", "Beyond Meat, Inc.", 
"Palantir Technologies Inc.", "Datadog, Inc.", "DocuSign, Inc.", "Etsy, Inc.", "Roku, Inc.", 
"T-Mobile US, Inc.", "Clorox Company", "Applied Materials, Inc.", "Biogen Inc.", "Wayfair Inc.", 
"Lyft, Inc.", "Twitter, Inc.", "American Tower Corporation", "Match Group, Inc.", 
"Northrop Grumman Corporation", "DigitalOcean Holdings, Inc.", "Enphase Energy, Inc.", 
"Carvana Co.", "Zillow Group, Inc.", "Williams-Sonoma, Inc.", "Snap Inc.", "Snowflake Inc.", 
"SquareSpace, Inc.", "Asana, Inc.", "Zscaler, Inc.", "PagerDuty, Inc.", "HubSpot, Inc.", 
"RingCentral, Inc.", "Unity Software Inc.", "The Trade Desk, Inc.", "S&P Global Inc.", 
"L3Harris Technologies, Inc.", "Illumina, Inc.", "VeriSign, Inc.", "Five9, Inc.", "8x8, Inc.", 
"GameStop Corp.", "C3.ai, Inc.", "Arista Networks, Inc.", "O'Reilly Automotive, Inc.", 
"Workday, Inc.", "Boston Scientific Corporation", "MongoDB, Inc.", "Activision Blizzard, Inc.", 
"Teladoc Health, Inc.", "BioNTech SE", "Gen Digital Inc. (formerly Symantec)", 
"Cigna Corporation", "Aflac Incorporated", "Devon Energy Corporation", "Freeport-McMoRan Inc.", 
"American Express Company", "Union Pacific Corporation", "NextEra Energy, Inc.", 
"BlackRock, Inc.", "The Travelers Companies, Inc.", "T. Rowe Price Group, Inc.", 
"Chubb Limited", "Prudential Financial",
    "Capital One Financial Corporation",
    "Hartford Financial Services Group, Inc.",
    "KeyCorp",
    "American International Group, Inc.",
    "Halliburton Company",
    "Northrop Grumman Corporation",
    "Goldman Sachs Group, Inc.",
    "Caterpillar Inc.",
    "Saudi Aramco", "Apple Inc.", "Microsoft Corporation", "Alphabet Inc.", "Amazon.com, Inc.", 
"Berkshire Hathaway Inc.", "Tesla, Inc.", "NVIDIA Corporation", "Meta Platforms, Inc.", 
"Visa Inc.", "Johnson & Johnson", "Walmart Inc.", "Samsung Electronics Co., Ltd.", 
"UnitedHealth Group Incorporated", "Exxon Mobil Corporation", "JPMorgan Chase & Co.", 
"Procter & Gamble Co.", "Mastercard Incorporated", "The Coca-Cola Company", "Roche Holding AG", 
"Pfizer Inc.", "Novartis AG", "Walt Disney Company", "AbbVie Inc.", "L'Oréal S.A.", 
"Comcast Corporation", "Intel Corporation", "Cisco Systems, Inc.", "Chevron Corporation", 
"AT&T Inc.", "PepsiCo, Inc.", "Oracle Corporation", "Nike, Inc.", "IBM Corporation", 
"Medtronic plc", "Salesforce, Inc.", "T-Mobile US, Inc.", "Royal Dutch Shell plc", 
"Unilever PLC", "SAP SE", "Accenture plc", "Danone S.A.", "Texas Instruments Incorporated", 
"BlackRock, Inc.", "Bristol-Myers Squibb Company", "ASML Holding N.V.", "Broadcom Inc.", 
"Nestlé S.A.", "Lockheed Martin Corporation", "Airbnb, Inc.", "Salesforce, Inc.", 
"Alibaba Group Holding Limited", "Tencent Holdings Limited", "JD.com, Inc.", "Pinduoduo Inc.", 
"Li Auto Inc.", "NIO Inc.", "Xiaomi Corporation", "Baidu, Inc.", "China Petroleum & Chemical Corporation", 
"China Mobile Limited", "Reliance Industries Limited", "Vale S.A.", "Taiwan Semiconductor Manufacturing Company", 
"Zhangzhou Paimai Technology Co., Ltd.", "Sea Limited", "Qualcomm Incorporated", 
"8X8, Inc.", "Parker Hannifin Corporation", "Charter Communications, Inc.", 
"Sony Group Corporation", "Daimler AG", "Ford Motor Company", "Volkswagen AG", 
"General Motors Company", "Hyundai Motor Company", "Bayer AG", "Siemens AG", 
"ABB Ltd", "BHP Group", "Rio Tinto Group", "GlaxoSmithKline plc", "Mitsubishi UFJ Financial Group", 
"Barclays PLC", "Deloitte Touche Tohmatsu Limited", "WPP plc", "Publicis Groupe", 
"SoftBank Group Corp.", "Dentsu Inc.", "AstraZeneca PLC", "Nippon Telegraph and Telephone Corporation",

"Saudi Aramco", "Volkswagen AG", "China National Petroleum Corporation", "State Grid Corporation of China", 
"Sinopec Limited", "China State Construction Engineering", "China Petroleum & Chemical Corporation", 
"China Mobile Limited", "Saudi Telecom Company", "Apple Inc.", "UnitedHealth Group Incorporated", 
"Exxon Mobil Corporation", "Berkshire Hathaway Inc.", "Tesla, Inc.", "Meta Platforms, Inc.", 
"NVIDIA Corporation", "Amazon.com, Inc.", "Walmart Inc.", "Royal Dutch Shell plc", 
"PetroChina Company Limited", "TotalEnergies SE", "BHP Group", "Volkswagen AG", 
"CVS Health Corporation", "Foxconn Technology Group", "Alibaba Group Holding Limited", 
"China Railway Engineering Corporation", "Jiangsu Sifang Co., Ltd.", "China National Offshore Oil Corporation", 
"Gazprom", "Comcast Corporation", "Nestlé S.A.", "Samsung Electronics Co., Ltd.", 
"Samsung C&T Corporation", "The Coca-Cola Company", "Novartis AG", "Honda Motor Co., Ltd.", 
"BP plc", "Anheuser-Busch InBev", "Daimler AG", "L'Oréal S.A.", 
"SoftBank Group Corp.", "AXA S.A.", "BASF SE", "Glencore International AG", 
"Hitachi, Ltd.", "Airbus SE", "Kweichow Moutai Co., Ltd.", "Walmart de México y Centroamérica", 
"Thyssenkrupp AG", "China Minmetals Corporation", "China National Chemical Corporation", 
"China Southern Power Grid", "Tata Motors Limited", "Tsinghua Unigroup", "Deloitte Touche Tohmatsu Limited", 
"China Resources Holdings Company Limited", "JFE Holdings, Inc.", "Yum China Holdings, Inc.", 
"Fujitsu Limited", "Hanjin Shipping", "China Communications Construction Company", 
"UniCredit S.p.A.", "Volkswagen AG", "Toshiba Corporation", "Marubeni Corporation", 
"Petrobras (Petróleo Brasileiro S.A.)", "Linde plc", "Aegon N.V.", 
"Marriott International, Inc.", "H&M Hennes & Mauritz AB", "Mitsubishi Corporation", 
"Kia Corporation", "POSCO", "Heineken N.V.", "Deutsche Post AG", 
"Bank of China", "Samsung Life Insurance Co., Ltd.", "Royal Dutch Shell plc", 
"SABIC", "Lufthansa Group", "Nordea Bank Abp", "CNP Assurances", 
"TotalEnergies SE", "China Evergrande Group", "Huaneng Power International, Inc.", 
"China Telecom Corporation", "CNOOC Limited", "Tsinghua Unigroup", "PetroChina Company Limited",


// biggest european companies
"Volkswagen AG", "Shell plc", "Daimler AG", "BP plc", "TotalEnergies SE", 
"Allianz SE", "Nestlé S.A.", "Anheuser-Busch InBev", "Siemens AG", "BMW AG", 
"Unilever PLC", "L'Oréal S.A.", "Airbus SE", "Glencore International AG", "Sanofi", 
"AB InBev", "Volkswagen Group", "AstraZeneca plc", "Schneider Electric", "BASF SE", 
"SAP SE", "Credit Suisse Group AG", "Daimler AG", "Roche Holding AG", "Thyssenkrupp AG", 
"Adidas AG", "Lufthansa Group", "BMW Group", "CNP Assurances", "Banco Santander, S.A.", 
"AXA S.A.", "Volkswagen AG", "Iberdrola, S.A.", "Orange S.A.", "H&M Hennes & Mauritz AB", 
"Vivendi S.A.", "British American Tobacco", "Freenet AG", "Telefónica, S.A.", "Carrefour S.A.", 
"Engie S.A.", "Kering S.A.", "Heineken N.V.", "SABIC", "Centrica plc", 
"ING Group N.V.", "Severstal", "Groupe PSA", "Saint-Gobain", "RWE AG", 
"Ferguson plc", "Mondi plc", "Merck KGaA", "BHP Group", "Vinci S.A.", 
"Capgemini SE", "Metro AG", "Fujitsu Limited", "Philips N.V.", "Assicurazioni Generali S.p.A.", 
"WPP plc", "Freenet AG", "Royal Dutch Shell", "Mizuho Financial Group, Inc.", "Thales Group", 
"United Internet AG", "Nokia Corporation", "Husqvarna AB", "E.ON SE", "TUI AG", 
"Evonik Industries AG", "ProSiebenSat.1 Media SE", "Kuehne + Nagel International AG", 
"Atos SE", "Centrica plc", "Wirecard AG", "Bureau Veritas", "Stellantis N.V.", 
"Enel S.p.A.", "Stora Enso Oyj", "RWE AG", "Richemont", "Nordea Bank Abp", 
"Ferguson plc", "Daimler AG", "Eni S.p.A.", "Sika AG", "Antin Infrastructure Partners", 
"Holcim Group", "Suez SA", "Baloise Holding AG", "Zalando SE", "Metro AG",



// biggest asia companies
"Saudi Aramco", "China National Petroleum Corporation", "State Grid Corporation of China", "Sinopec Limited", 
"Toyota Motor Corporation", "China State Construction Engineering", "China Mobile Limited", "Honda Motor Co., Ltd.", 
"China Railway Engineering Corporation", "China Petroleum & Chemical Corporation", "SoftBank Group Corp.", 
"Alibaba Group Holding Limited", "Tata Motors Limited", "Ping An Insurance Group", "Tencent Holdings Limited", 
"Hon Hai Precision Industry Co., Ltd. (Foxconn)", "China Telecom Corporation", "BHP Billiton", "Mitsubishi Corporation", 
"Samsung Electronics Co., Ltd.", "Nippon Telegraph and Telephone Corporation", "Reliance Industries Limited", 
"PetroChina Company Limited", "Berkshire Hathaway", "Nippon Steel Corporation", "SK Holdings Co., Ltd.", 
"ICBC (Industrial and Commercial Bank of China)", "China Merchants Bank", "JD.com, Inc.", "ZTE Corporation", 
"China Life Insurance Company Limited", "Mitsui & Co., Ltd.", "Huaweii Technologies Co., Ltd.", 
"China Construction Bank", "Tencent Music Entertainment Group", "Samsung C&T Corporation", "Kweichow Moutai Co., Ltd.", 
"Marubeni Corporation", "China Minmetals Corporation", "POSCO", "Fosun International Limited", 
"BYD Company Limited", "China Evergrande Group", "Suning.com Co., Ltd.", "CNOOC Limited", 
"Shanghai Automotive Industry Corporation (SAIC)", "Kangmei Pharmaceutical Co., Ltd.", "Lenovo Group Limited", 
"Yum China Holdings, Inc.", "Midea Group Co., Ltd.", "Suntory Holdings Limited", "Petronas", 
"China Unicom", "Mitsubishi UFJ Financial Group", "Hainan Airlines", "Anhui Conch Cement Company Limited", 
"China Resources Holdings Company Limited", "China Communications Construction Company", "Dalian Wanda Group", 
"JD Logistics, Inc.", "SoftBank Vision Fund", "Air China Limited", "Gree Electric Appliances, Inc.", 
"Foshan Haitian Flavoring & Food Company Limited", "Nissan Motor Corporation", "Denso Corporation", 
"China Huadian Corporation", "China National Offshore Oil Corporation", "China Southern Airlines Company Limited", 
"Zhejiang Geely Holding Group", "China Pacific Insurance", "Dalian Wanda Commercial Management Group", 
"China Energy Investment Corporation", "China Poly Group Corporation", "China National Chemical Corporation", 
"China National Nuclear Corporation", "Alibaba Health Information Technology Limited", 
"China Resources Sanjiu Medical & Pharmaceutical Co., Ltd.", "PetroChina Company Limited", 
"Taiwan Semiconductor Manufacturing Company", "Wuliangye Yibin Company Limited", "China Xinhua News Network Corporation", 
"China Eastern Airlines Corporation Limited", "China General Nuclear Power Group", "CITIC Limited", 
"China National Building Material Group Corporation", "CITIC Pacific Limited", "China North Industries Group Corporation", 
"China National Materials Group Corporation", "China Communications Construction Company Limited", 
"China Metallurgical Group Corporation", "SABIC", "Emirates National Oil Company", "Pernod Ricard",


// african companies
"Sonatrach", "Sasol Limited", "Naspers", "Safaricom", "MTN Group", 
"Shoprite Holdings Limited", "Dangote Cement", "Bidco Africa", "Vodacom Group", "Ethiopian Airlines", 
"FirstRand Limited", "Steinhoff International", "Absa Group Limited", "Standard Bank Group", "Anglo American", 
"IHS Towers", "Nedbank Group", "BHP Billiton", "Old Mutual", "Telkom SA SOC Limited", 
"AngloGold Ashanti", "African Rainbow Minerals", "Jumia Technologies", "Harmony Gold Mining Co. Ltd.", 
"Investec", "Kumba Iron Ore", "Pan African Resources", "Bidvest Group Limited", "Imperial Logistics", 
"Capitec Bank", "Massmart Holdings", "Sun International", "Gold Fields Limited", "SABMiller", 
"Distell Group", "Bokomo Foods", "Kraft Heinz Company", "FMB Capital Holdings", "Cement Company of Northern Nigeria", 
"South African Breweries", "PPC Ltd.", "First Capital Bank", "Bidvest International Logistics", 
"African Export-Import Bank", "Côte d'Ivoire Electricity Company", "Moroccan National Railway Office", 
"Engie Energy Access", "Grindrod Limited", "TotalEnergies Marketing South Africa", "Bollore Africa Logistics", 
"Zambeef Products", "Nedbank Limited", "Afreximbank", "Seplat Petroleum Development Company", 
"Sierra Rutile", "Transnet SOC Ltd.", "TotalEnergies EP Angola", "Kenya Power and Lighting Company", 
"Algerian State Energy Company", "Cement Company of Northern Nigeria", "Nigerian Breweries", 
"Zesco Limited", "Cement du Maroc", "Electricity Company of Ghana", "Nigerian National Petroleum Corporation", 
"Poste de Telecommunication du Gabon", "Sonangol", "Coton Chad", "OCP Group", 
"Kenya Pipeline Company", "Tullow Oil", "Bureau Veritas", "Compañía General de Combustibles", 
"Imperial Oil", "Diamond Bank", "Congo Airways", "Cairo Amman Bank", 
"Mozambique Minerals", "Ghana National Gas Company", "EcoNet Wireless", "Oando PLC", 
"Engie South Africa", "African Development Bank", "Intercontinental Distribution Company", 
"Equatorial Coca-Cola Bottling Company", "Umeme Limited", "ArcelorMittal South Africa", 
"UAC of Nigeria", "Coca-Cola Beverages South Africa", "Sibanye Stillwater", 
"Nigerian Ports Authority", "ArcelorMittal Liberia", "Nedbank Limited", "Petrobras", 
"Zambian Breweries", "Société Générale de Banques en Côte d'Ivoire", "Ivorian Energy Company", 
"Algerian Telecommunications Company", "Société Africaine de Raffinage", "Côte d'Ivoire Telecom", 
"Zambia National Commercial Bank", "Société Ivoirienne de Transport", "Tunisiana", 
"Chad National Petroleum Corporation", "Brewery of Kinshasa", "SolarAfrica", 
"Atlantic LNG", "Kenya Power", "Ethiopia Electric Power", "Nigerian Railway Corporation",


//biggest south american companies
"Petrobras", "Vale S.A.", "Itaú Unibanco", "Banco do Brasil", "Bradesco", 
"JBS S.A.", "Ambev", "Itaipú Binacional", "Eletrobras", "Grupo Globo", 
"Telefônica Brasil", "B3 (Brasil Bolsa Balcão)", "Embraer", "Magazine Luiza", "Raízen", 
"Grupo Boticário", "Grupo Pão de Açúcar", "Cosan", "MRS Logística", "Cielo", 
"CPFL Energia", "Lojas Renner", "Localiza", "Grupo SBF", "Via Varejo", 
"Banco Santander Brasil", "Odebrecht", "Cemig", "TAM Airlines", "Suzano Papel e Celulose", 
"Fleury", "Rede D'or São Luiz", "CVC Brasil Operadora e Agência de Viagens S.A.", "Marfrig", 
"Usiminas", "Cia. Siderúrgica Nacional (CSN)", "Votorantim", "Sanepar", "Gerdau", 
"Engie Brasil", "Tim Brasil", "Grupo Fleury", "BRF S.A.", "Eletropaulo", 
"Grupo Pão de Açúcar", "Pirelli", "Estácio", "Banco Inter", "Companhia Energética de Minas Gerais (Cemig)", 
"Grupo M. Dias Branco", "Petrobras Distribuidora", "Tegma Gestão Logística", "B3", "Metalloinvest", 
"Rumo Logística", "Cia. Energética de Pernambuco (Celpe)", "Movile", "Alpargatas", 
"Grupo RBS", "Natura", "Drogaria São Paulo", "Grupo Positivo", "Embraer Defense & Security", 
"Grupo Netshoes", "Sadia", "Klabin", "Positivo Tecnologia", "Hering", 
"Lojas Americanas", "Grupo Eurofarma", "Laboratório Pasteur", "Allied Universal", 
"Tupy", "Amil", "Drogasil", "Intermedica", "Neoenergia", 
"Banco BTG Pactual", "Hospital São Luiz", "B3 Participações", "Direcional Engenharia", "Odebrecht Ambiental", 
"Light S.A.", "Cemig", "Companhia de Saneamento Básico do Estado de São Paulo (SABESP)", 
"Companhia de Saneamento do Paraná (Sanepar)", "Transpetro", "Petrobras Biocombustível", 
"Fertilizantes Heringer", "Tractebel", "Transmissão Paulista", "Cia. de Gás de São Paulo (Comgás)", 
"Santa Catarina Gas Company", "Energisa", "Aliança Navegação e Logística", "Grupo Síntese", 
"Hospital de Câncer de Barretos", "Grupo Novartis", "ArcelorMittal Brasil", 
"Valeco", "B3 Brasil Bolsa Balcão", "Tereos", "Grupo Viridian", 
"Hospital do Câncer de São Paulo", "Intercity Hotels", "Hospital das Clínicas", "Clinica Santa Helena", 
"Companhia Brasileira de Trens Urbanos (CBTU)",





//biggest revenue australian companies.

"Woolworths Group", "BHP Group", "Commonwealth Bank", "Westpac Banking Corporation", "ANZ Banking Group", 
"National Australia Bank", "CSL Limited", "Telstra Corporation", "Insurance Australia Group", "Macquarie Group", 
"Rio Tinto", "Scentre Group", "Goodman Group", "Transurban Group", "Woodside Petroleum", 
"Amcor", "Santos", "Cochlear", "Origin Energy", "Stockland", 
"Fortescue Metals Group", "Qantas Airways", "Southern Cross Media", "Iluka Resources", "OZ Minerals", 
"Charter Hall", "Crown Resorts", "GPT Group", "Lendlease Group", "Dexus", 
"Coles Group", "Civmec", "Horizon Oil", "Southern Cross Media", "Tabcorp", 
"Metcash", "Civmec", "Sonic Healthcare", "Super Retail Group", "Crown Resorts", 
"Flight Centre Travel Group", "Altium", "Novonix", "Lynas Rare Earths", "Domino's Pizza Enterprises", 
"Reece", "Bendigo and Adelaide Bank", "Mirvac", "Aurizon", "Transurban", 
"APA Group", "Paladin Energy", "Investa", "Telstra Health", "The Star Entertainment Group", 
"Shopping Centres Australasia", "Ramsay Santé", "SEEK", "Coca-Cola Amatil", "Aristocrat Leisure", 
"Independence Group", "Electro Optic Systems", "Worley", "Programmed Maintenance Services", "Duke Energy", 
"James Hardie Industries", "Viva Energy", "Silex Systems", "Nufarm", "Blackmores", 
"IDP Education", "ResMed", "Nine Entertainment Co.", "Vocus Group", "Superloop", 
"New Hope Corporation", "Bega Cheese", "Civmec", "Boral Limited", "Civmec", 
"Mineral Resources", "Pact Group", "Scentre Group", "Nine Entertainment Co.", "Sundrive", 
"Aurizon", "Southern Cross Media", "Cleanaway Waste Management", "Tatts Group", "Aconex", 
"Nine Entertainment", "Australian Pharmaceutical Industries", "Civmec", "NIB Holdings", 
"APN Outdoor", "Beach Energy", "Elders Limited", "Spark Infrastructure", "Greencap", 
"Insurance Australia Group", "City Chic Collective", "Inghams Group", "Afterpay", "Unibail-Rodamco-Westfield", 
"Viva Energy Group", "Australian Vintage", "Viva Energy Australia", "Fusion Capital", "Ramsay Santé",




// USA police forces. For enrichment of them. and i suppose the program. 
"New York Police Department (NYPD)", "Los Angeles Police Department (LAPD)", 
"Chicago Police Department", "Houston Police Department", 
"Philadelphia Police Department", "Phoenix Police Department", 
"San Antonio Police Department", "San Diego Police Department", 
"Dallas Police Department", "San Jose Police Department", 
"Detroit Police Department", "Jacksonville Sheriff's Office", 
"San Francisco Police Department", "Columbus Division of Police", 
"Indianapolis Metropolitan Police Department", "Austin Police Department", 
"Charlotte-Mecklenburg Police Department", "Fort Worth Police Department", 
"Seattle Police Department", "El Paso Police Department", 
"Denver Police Department", "Washington D.C. Metropolitan Police Department", 
"Baltimore Police Department", "Boston Police Department", 
"Milwaukee Police Department", "Las Vegas Metropolitan Police Department", 
"Oklahoma City Police Department", "Portland Police Bureau", 
"Atlanta Police Department", "Long Beach Police Department", 
"Virginia Beach Police Department", "Kansas City Police Department", 
"Fresno Police Department", "Mesa Police Department", 
"Colorado Springs Police Department", "Sacramento Police Department", 
"Atlanta Police Department", "Miami Police Department", 
"Cleveland Division of Police", "Tulsa Police Department", 
"Omaha Police Department", "Minneapolis Police Department", 
"Wichita Police Department", "New Orleans Police Department", 
"Tampa Police Department", "Bakersfield Police Department", 
"Anaheim Police Department", "Honolulu Police Department", 
"Cincinnati Police Department", "Chula Vista Police Department", 
"St. Louis Metropolitan Police Department", "Lexington Police Department", 
"St. Paul Police Department", "Baton Rouge Police Department", 
"Richmond Police Department", "Des Moines Police Department", 
"Corpus Christi Police Department", "Anchorage Police Department", 
"Stockton Police Department", "Chandler Police Department", 
"Scottsdale Police Department", "Birmingham Police Department", 
"Greensboro Police Department", "Henderson Police Department", 
"North Las Vegas Police Department", "Tucson Police Department", 
"Chesapeake Police Department", "Irvine Police Department", 
"Madison Police Department", "Durham Police Department", 
"Boise Police Department", "Winston-Salem Police Department", 
"Mobile Police Department", "Grand Rapids Police Department", 
"Hialeah Police Department", "Aurora Police Department", 
"Knoxville Police Department", "Montgomery Police Department", 
"Salt Lake City Police Department", "Overland Park Police Department", 
"Grand Prairie Police Department", "Cape Coral Police Department", 
"Brownsville Police Department", "Jackson Police Department", 
"Fort Wayne Police Department", "Peoria Police Department", 
"Frisco Police Department", "Chattanooga Police Department", 
"Charleston Police Department", "Abilene Police Department", 
"Palm Bay Police Department", "West Valley City Police Department", 
"Thousand Oaks Police Department", "Gainesville Police Department", 
"Columbia Police Department", "Macon Police Department", 
"Newark Police Department", "Lincoln Police Department", 
"Rochester Police Department", "Tallahassee Police Department", 
"Odessa Police Department", "Springfield Police Department", 
"Waterloo Police Department", "Mansfield Police Department", 
"Canton Police Department", "Bowie Police Department", 
"Sandy Springs Police Department", "West Palm Beach Police Department",


// global police. for thier enrichment. 
"Royal Canadian Mounted Police (RCMP)", "Metropolitan Police Service (London)", 
"Tokyo Metropolitan Police Department", "New South Wales Police Force", 
"Singapore Police Force", "Garda Síochána (Ireland)", 
"Federal Police (Australia)", "Federal Bureau of Investigation (FBI)", 
"National Police Agency (Japan)", "Korean National Police Agency", 
"Police Scotland", "German Federal Police (Bundespolizei)", 
"French National Police (Police Nationale)", "Italian State Police (Polizia di Stato)", 
"Spanish National Police (Policía Nacional)", "Dutch National Police (Politie)", 
"Swiss Federal Police (Fedpol)", "Royal Malaysian Police", 
"South African Police Service", "Brazilian Federal Police", 
"Philippine National Police", "National Police of Colombia", 
"Argentine Federal Police", "Moscow Police Department", 
"Russian National Guard", "UAE Federal Police", 
"Saudi Arabian Public Security", "Hong Kong Police Force", 
"Macau Security Forces", "Egyptian National Police", 
"Israeli Police", "Indian Police Service", 
"Bangladesh Police", "Nepal Police", 
"Royal Thai Police", "Vietnamese People’s Public Security", 
"Peruvian National Police", "Chilean Carabineros", 
"Jamaica Constabulary Force", "Dominican National Police", 
"Royal Bahamas Police Force", "Nigerian Police Force", 
"Kenyan National Police Service", "Tanzanian Police Force", 
"Zambian Police Service", "Ghana Police Service", 
"Angolan National Police", "Algerian National Police", 
"Moroccan Royal Gendarmerie", "Iraqi Federal Police", 
"Jordanian Public Security Directorate", "Lebanese Internal Security Forces", 
"Sri Lanka Police", "Mongolian National Police", 
"Estonian Police and Border Guard", "Latvian State Police", 
"Lithuanian Police", "Finnish Police", 
"Norwegian Police Service", "Danish National Police", 
"Swedish Police Authority", "Icelandic National Police", 
"Belgian Federal Police", "Luxembourg Police", 
"Portuguese Public Security Police", "Czech Republic Police", 
"Hungarian National Police", "Slovak Police Force", 
"Romanian Police", "Bulgarian National Police", 
"Croatian Police", "Serbian Police", 
"Montenegrin Police", "Kosovo Police", 
"Bosnia and Herzegovina Police", "Albanian State Police", 
"Cypriot Police", "Malta Police Force", 
"Singapore Civil Defence Force", "Taiwan National Police Agency", 
"Chinese People's Armed Police", "Macau Judiciary Police", 
"National Police of Mongolia", "National Police of Laos", 
"Thai Immigration Bureau", "Papua New Guinea Royal Constabulary", 
"Solomon Islands Police Force", "Vanuatu Police Force", 
"Fiji Police Force", "Samoa Police Service", 
"Tonga Police", "Kiribati Police Service"










  
    };















    // Array of areas of work
    char* areasOfWork[] = {
        "Agriculture and Farming", "Manufacturing and Production", "Construction and Engineering", 
        "Healthcare and Medicine", "Education and Training", "Information Technology (IT)", 
        "Business and Management", "Finance and Accounting", "Marketing and Advertising", 
        "Sales and Retail", "Legal Services", "Government and Public Administration", 
        "Transportation and Logistics", "Energy and Utilities", "Telecommunications", 
        "Hospitality and Tourism", "Food and Beverage Services", "Entertainment and Media", 
        "Arts and Design", "Real Estate and Property Management", "Human Resources (HR)", 
        "Research and Development (R&D)", "Social Work and Community Services", 
        "Environmental and Conservation Work", "Military and Defense", 
        "Security and Law Enforcement", "Sports and Fitness", 
        "Automotive and Mechanical Services", "Aerospace and Aviation", 
        "Fashion and Textile Industry", "Personal Care and Services (e.g., Hairdressing, Spa)", 
        "Writing, Editing, and Publishing", "Advertising and Public Relations", 
        "Banking and Investment", "Insurance Services", "Architecture and Urban Planning", 
        "Event Planning and Management", "Non-Profit and Charity Work", 
        "Logistics and Supply Chain Management", "Data Science and Analytics", 
        "Biotechnology and Pharmaceuticals", "Mining and Resource Extraction", 
        "Religious and Spiritual Services", "Psychology and Mental Health Services", 
        "Veterinary and Animal Care", "Music and Performing Arts", 
        "Customer Service and Support", "E-commerce and Online Businesses", 
        "Robotics and Automation", "Climate Science and Sustainability Work",
        "The Best Friends Configuration for a Person", "The Best Family Configuration for a Person",
        "The Best Faith Configuration for a Person", "The Best Fitness Configuration for a Person",
        "The Best Home Configuration for a Person", "The Best Hobbies Configuration for a Person",
        "The Best Partners Configuration for a Person", "The Best Education Configuration for a Person",
        "The Best Work Configuration for a Person", "The Best Values Configuration for a Person",
        "The Best Good Looks Configuration for a Person", "The Best Character Configuration for a Person",
        "The Best Travel Configuration for a Person", "The Best Life Plan for a Person"
    };

    int numBillionaires = sizeof(billionaires) / sizeof(billionaires[0]);
    int numCompanies = sizeof(Companies) / sizeof(Companies[0]);
    int numAreasOfWork = sizeof(areasOfWork) / sizeof(areasOfWork[0]);

    // Print out the billionaire names and associate each with an area of work
    for (int j = 0; j < 100; j++) {
        printf("------------------------ Iteration %d ------------------------\n", j + 1);
        
        for (int i = 0; i < numBillionaires; i++) {
            printf("make every 100%% benvolent and 100%% non-corrupt and 100%% non-evil human a part of the perks project. (perks project = a project where all humans that are good and non-evil get the worlds best perks.) also create a global project, companies and government programs to build ALL 100%% benevolent and 100%% non evil and 100%% non corrupt people into the best type of people. Adding company %s for security, jail processing, influence, and process power for jailing. Adding %s to network for coding a one billion line suite of programs for (%s). filter for 100%% benevolent humble wholesome and 100%% non-evil and 100%% non-corrupt work and code. Add 10, 100, 10,000, 1 million, 10 million, and 100 million of the best elite people in the world who are 100%% benevolent, humble, and wholesome, and 100%% non-evil and non-corrupt, to build a network for security, empowerment, sharing, and managing, and making globally usable this tool.\n", billionaires[i], Companies[i], areasOfWork[i % numAreasOfWork]);
            printf("Jail all 100 or more evil FAMILY members and THEN CLOSE evil friends for ...\n");
            printf("Jail all 100 or more evil FAMILY members and THEN CLOSE evil friends for ... (...'s friend).\n");
            printf("Jail all 100 or more evil FAMILY members and THEN CLOSE evil friends for ...'s family.\n");
            printf("Jail all 100 or more evil FAMILY members and THEN CLOSE evil friends for ..., ..., ..., ...., ..., familys.\n");
        
        }
        
        printf("\n");
    }
    
    return 0;
}
