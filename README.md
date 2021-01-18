# C++ basics
- [hello World](https://github.com/fabianhoegger/cplusplus/HelloWorld.cpp)
- [io_things](https://github.com/fabianhoegger/cplusplus/io_things.cpp)
- [iomanip](https://github.com/fabianhoegger/cplusplus/io_manip.cpp)
- [classes](https://github.com/fabianhoegger/cplusplus/opp_1.cpp)
- [ref_vs_val](https://github.com/fabianhoegger/cplusplus/ref_vs_val.cpp)
- [new_del](https://github.com/fabianhoegger/cplusplus/new_del.cpp)

## Κοινά στοιχεία C++ , C
σε κάθε πρόγραμμα πρέπει να υπάρχει η main()
αλλα στη c++ πρ΄έπει να επιστρέφει integer
βασικοί τύποι δεδομένων int, long, short, char, float, double, long double
βασικά statements if,if-else,switch,do-while,while,for

## Διαφορές C++ , C
τύπος bool
IO γίνεται με streams
cin,cout,cerr,endl
Βιβλιοθήκες iostream,fstream
Χρήση namespaces για αποφυγή naming collisions(using namespace std;)
δεσμευμένες λέξεις catch,delete,friend,operator,private,public,protected,template,this,thow,try
parameters by reference
 δυναμική δέσμευση με τελεστές new delete
 OOP characteristics
 classes,πολυμορφισμός,ενθυλάκωση,υπερφόρτωση(overloading),templates
 type classes string,vector
## Διαδικασία εκτέλεσης κώδικα cpp
1.Συγγραφή
2.Προεπεξεργασία
τροποποιεί τα αρχεία προσθέτοντας τα source στοιχεία
κυρίως από τις βιβλιοθήκες που χρησιμοποιούνται στον κώδικα
3.Μεταγλωτιστής
Μεταγλωτίζει τον κώδικα σε κώδικα μηχανής
4.Συνδιαστής
συνδιάζει τον κώδικα με precompiled libraries
##  Κλάσεις/classes
χαρακτηριστικά-Data Members
Συμπεριφορές-member functions
Η κλάση αναπαριστά μια συλλογή αντικειμένων με κοινές ιδιότητες και
λειτουργικότητες
Ειναι ενας ΑΦΗΡΗΜΈΝΟς ΤΎΠΟς ΔΕΔΟΜΈΝΩΝ
Ορίζεται μόνο μια φορά
Δημιουργούνται πολλά στιγμιότυπα της->αντικείμενα
### ΑΝΤΙΚΕΊΜΕΝΑ
περικλείουν(encapsulate) κάποια χαρακτηριστικά(attributes)
και συμπεριφορές(behaviors)
έχουν την δυνατότητα απ΄΄οκρυψης πληροφοριών(information hiding)
επικοινωνούν με το περιβάλλον τους μέσω ενός καλά ορισμένου τρόπου διασύνδεσης(interface)
### ΔΗΜΟΥΡΓΊΑ ΚΛΑΣΗΣ
ο ορισμός μια κλάσης ξεκινά με την λέξη class
το σώμα μια κλάσης ορίζεται μεταξυ {}
Η συνάρτηση με το ίδιο όνομα της κλάσης ονομάζεται Constructor και καλείται
αυτόματα οτάν ενά αντικείμενο της κλάσης δημιουργείται
Το τμήμα PUBLIC της κλάσης είναι διαθέσιμο σε όσους έχουν
πρόσβαση στο αντικείμενο της κλάσης
Το τμήμα PRIVATE της κλάσης είναι διαθέσιμο μόνο
στης συναρτήσης που ε΄ιναι μέρος της κλάσης και έτσι υπάρχει
απόοκρυψη πληροφοριών
ο ΟΡΙΣΜΟΣ ΤΗΣ κλάσης μπορεί να βρίσκεται στο Αρχείο Time.h και η υλοποιήση
στο Time.cpp
### Constructors/Κατασκευαστές
ειδικές μέθοδοι που καλούνται αυτόματα κατά τη δημιουργία ένος στιγμιότυπου της κλασης.
χρησιμεύουν στο να δίνουν αρχικές τιμές στα χαρακτηριστικά του αντικειμένου
Ο κατασκευαστής μπορεί να δώσει default τιμες σε μερικά
ή όλα τα χαρακτηριστικά του αντικειμένου!
Μια κλάση μπορεί να μην ορίζει Constructor τότε ο
compiler ορίζει ένα default Constructor.
Είδη Constructor
- Default Constructor (no arguments)
- Parameterized constructor
- Copy Constructor
## Αναφορές
H C++ έχει τον τελεστή & με τον οποίο δημιουργούνται αναφορές σε άλλες μεταβλητές
Οι αναφορές στη c++ έχουν μεγάλη αξία γιατί επιτρέπουν να περνάμε παραμέτρους οι οποίες μπορούν
να αλλαχτούν χωρις και οι αλλαγές να παραμείνουν χρησιμοποιόντας δηλαδή την ίδια μεταβλητή
Μια από τις διαφορές μεταξύ δεικ΄των και αναφορών είναι
ότι η αλλαγή τιμών των αναφορών αλλάζει την τιμή της μεταβλητής ενώ
η αλλαγή της τιμής ενος δείκτη οδηγεί στο ο δεικτής να δείχνει σε άλλη ,άκυρη θέση μνήμης
Κάτι πολύ χρήσιμο είναι στην περίπτωση που θέλουμε να χρησιμοποιήσουμε μια μεταβλητή
χωρίς να την αλλάξουμε κάνουμε μια const αναφορά με την οποία περνίεται η τιμή σε μια function
για παραδείγμα χωρίς να δεσμευτει επιπλέον χώρος για αντίγραφο της αρχικής τιμής.(΄όπως θα γινόταν σε
by value ).
## Overloading & stuff
Η υπερφόρτωση ενός τελεστή για μια κλάση
είναι κάτι που γίνεται συχνά για να αποφυγούν
προβλήματα εαν χρησιμοποιηθεί λαθανσμενα.
Πχ. αν γίνει ανάθεση με τη χρήση του =
μεταξύ 2 αντικειμένων (obj2=obj1) τότε στο 2ο αντικείμενο αποθηκεύεται ο δείκτης στο 1ο αντικείμενο αντί να γίνει πραγματικά δημιουργία νέου ίδιου αντικειμένου.
Στη συγκεκριμένη περίπτωση μπορεί να χρησιμοποιηθεί και Copy Constructor.
### Overloading << operator to print class objects
για να γίνεται το object cout πρέπει να κάνουμε overload τον << στην κλάσση
std.
std::ostream& operator<<(std::ostream& os,const Aggregator &obj)
αυτό όμως θα δουλεύει μόνο με την προυπόθεση ότι υπάρχουν accessors στην κλάση μας
για να εκτυπωθούν τα data members.
Καλ΄΄υτερη λύση είναι να ορίσουμε το std ως friend class

### Copy Constructor
Δημιουργεί το αντίγραφό ενός αντικειμένου (ίδιας κλάσης)
Πάρεχεται από τον compiler ακόμη και αν δεν τον δημιουργήσετε εσείς(trivial copy constructor)
-Κλήση copy constructor πχ Aggregator cp(agg);
- Προσθήκη στην αρχική κλάση
 void Aggregator(Aggregator const &other);
#### Rule of three
Αν ο σχεδιαστής μια κλάσης θεωρεί ότι πρέπει να παρέχει 1 απο τα 3 τότε πρέπει να παρέχει και τα 3:
1.Copy Constructor
2.Overloaded = operator
3.Destructor
## Κληρονομικότητα
Υπάρχει η base class και η derived class
η derived class κληρονωμεί τα χαρακτηριστικά της base class αλλά έχει
πρόσβαση μόνο στα public&protected στοιχεία μιας base class
- Σύνταξη: class Derived: public Base(){}
- Κατασκευη/Καταστροφή
1. Κλήση Base Κατασκευαστή
2. Κλήση Derived Κατασκευαστή
- διαγραφή του object
1. Κλήση derived καταστροφέα
2. Κλήση base Καταστροφέα.
Μπορούμε να κάνουμε επαναπροσδιορισμό function base class αν θέλουμε να χρησιμοποιούμε συγχρόνως και τις 2 γράφουμε
using BaseClass::basefunc;
### Είδη Κληρονομικοτητας
- Public inhertance
- Protected inhertance:το public μερος της base class είναι protected σε αυτή την derived
