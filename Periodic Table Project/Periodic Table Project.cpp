#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

class element
{
protected:

    string name[118], symbol[118], ec[118], origin[118];

    int atomicnum[118] = {}, atomicrad[118] = {};

    double atomicwgh[118] = {}, en[118] = {}, meltp[118] = {}, boilp[118] = {}, density[118] = {};

public:
    // Symbol
    void set_symbol() {
        symbol[0] = "H";                             symbol[30] = "Ga";                         symbol[60] = "Pm";                           symbol[90] = "Pa";
        symbol[1] = "He";                            symbol[31] = "Ge";                         symbol[61] = "Sm";                           symbol[91] = "U";
        symbol[2] = "Li";                            symbol[32] = "As";                         symbol[62] = "Eu";                           symbol[92] = "Np";
        symbol[3] = "Be";                            symbol[33] = "Se";                         symbol[63] = "Gd";                           symbol[93] = "Pu";
        symbol[4] = "B";                             symbol[34] = "Br";                         symbol[64] = "Tb";                           symbol[94] = "Am";
        symbol[5] = "C";                             symbol[35] = "Kr";                         symbol[65] = "Dy";                           symbol[95] = "Cm";
        symbol[6] = "N";                             symbol[36] = "Rb";                         symbol[66] = "Ho";                           symbol[96] = "Bk";
        symbol[7] = "O";                             symbol[37] = "Sr";                         symbol[67] = "Er";                           symbol[97] = "Cf";
        symbol[8] = "F";                             symbol[38] = "Y";                          symbol[68] = "Tm";                           symbol[98] = "Es";
        symbol[9] = "Ne";                            symbol[39] = "Zr";                         symbol[69] = "Yb";                           symbol[99] = "Fm";
        symbol[10] = "Na";                           symbol[40] = "Nb";                         symbol[70] = "Lu";                           symbol[100] = "Md";
        symbol[11] = "Mg";                           symbol[41] = "Mo";                         symbol[71] = "Hf";                           symbol[101] = "No";
        symbol[12] = "Al";                           symbol[42] = "Tc";                         symbol[72] = "Ta";                           symbol[102] = "Lr";
        symbol[13] = "Si";                           symbol[43] = "Ru";                         symbol[73] = "W";                            symbol[103] = "Rf";
        symbol[14] = "P";                            symbol[44] = "Rh";                         symbol[74] = "Re";                           symbol[104] = "Db";
        symbol[15] = "S";                            symbol[45] = "Pd";                         symbol[75] = "Os";                           symbol[105] = "Sg";
        symbol[16] = "Cl";                           symbol[46] = "Ag";                         symbol[76] = "Ir";                           symbol[106] = "Bh";
        symbol[17] = "Ar";                           symbol[47] = "Cd";                         symbol[77] = "Pt";                           symbol[107] = "Hs";
        symbol[18] = "K";                            symbol[48] = "In";                         symbol[78] = "Au";                           symbol[108] = "Mt";
        symbol[19] = "Ca";                           symbol[49] = "Sn";                         symbol[79] = "Hg";                           symbol[109] = "Ds";
        symbol[20] = "Sc";                           symbol[50] = "Sb";                         symbol[80] = "Tl";                           symbol[110] = "Rg";
        symbol[21] = "Ti";                           symbol[51] = "Te";                         symbol[81] = "Pb";                           symbol[111] = "Cn";
        symbol[22] = "V";                            symbol[52] = "I";                          symbol[82] = "Bi";                           symbol[112] = "Nh";
        symbol[23] = "Cr";                           symbol[53] = "Xe";                         symbol[83] = "Po";                           symbol[113] = "Fl";
        symbol[24] = "Mn";                           symbol[54] = "Cs";                         symbol[84] = "At";                           symbol[114] = "Mc";
        symbol[25] = "Fe";                           symbol[55] = "Ba";                         symbol[85] = "Rn";                           symbol[115] = "Lv";
        symbol[26] = "Co";                           symbol[56] = "La";                         symbol[86] = "Fr";                           symbol[116] = "Uus";
        symbol[27] = "Ni";                           symbol[57] = "Ce";                         symbol[87] = "Ra";                           symbol[117] = "Og";
        symbol[28] = "Cu";                           symbol[58] = "Pr";                         symbol[88] = "Ac";
        symbol[29] = "Zn";                           symbol[59] = "Nd";                         symbol[89] = "Th";
    }

    void get_symbol(int a)
    {
        cout << symbol[a] << endl;
    }

    // Name 
    void set_name()
    {
        name[0] = "Hydrogen";                      name[30] = "Gallium";                  name[60] = "Promethium";                 name[90] = "Protactinium";
        name[1] = "Helium";                        name[31] = "Germanium";                name[61] = "Samarium";                   name[91] = "Uranium";
        name[2] = "Lithium";                       name[32] = "Arsenic";                  name[62] = "Europium";                   name[92] = "Neptunium";
        name[3] = "Beryllium";                     name[33] = "Selenium";                 name[63] = "Gadolinium";                 name[93] = "Plutonium";
        name[4] = "Boron";                         name[34] = "Bromine";                  name[64] = "Terbium";                    name[94] = "Americium";
        name[5] = "Carbon";                        name[35] = "Krypton";                  name[65] = "Dysprosium";                 name[95] = "Curium";
        name[6] = "Nitrogen";                      name[36] = "Rubidium";                 name[66] = "Holmium";                    name[96] = "Berkelium";
        name[7] = "Oxygen";                        name[37] = "Strontium";                name[67] = "Erbium";                     name[97] = "Californium";
        name[8] = "Fluorine";                      name[38] = "Yttrium";                  name[68] = "Thulium";                    name[98] = "Einsteinium";
        name[9] = "Neon";                          name[39] = "Zirconium";                name[69] = "Ytterbium";                  name[99] = "Fermium";
        name[10] = "Sodium";                       name[40] = "Niobium";                  name[70] = "Lutetium";                   name[100] = "Mendelevium";
        name[11] = "Magnesium";                    name[41] = "Molybdenum";               name[71] = "Hafnium";                    name[101] = "Nobelium";
        name[12] = "Aluminium";                    name[42] = "Technetium";               name[72] = "Tantalum";                   name[102] = "Lawrencium";
        name[13] = "Silicon";                      name[43] = "Ruthenium";                name[73] = "Tungsten";                   name[103] = "Rutherfordium";
        name[14] = "Phosphorus";                   name[44] = "Rhodium";                  name[74] = "Rhenium";                    name[104] = "Dubnium";
        name[15] = "Sulfur";                       name[45] = "Palladium";                name[75] = "Osmium";                     name[105] = "Seaborgium";
        name[16] = "Chlorine";                     name[46] = "Silver";                   name[76] = "Iridium";                    name[106] = "Bohrium";
        name[17] = "Argon";                        name[47] = "Cadmium";                  name[77] = "Platinum";                   name[107] = "Hassium";
        name[18] = "Potassium";                    name[48] = "Indium";                   name[78] = "Gold";                       name[108] = "Meitnerium";
        name[19] = "Calcium";                      name[49] = "Tin";                      name[79] = "Mercury";                    name[109] = "Darmstadtium";
        name[20] = "Scandium";                     name[50] = "Antimony";                 name[80] = "Thallium";                   name[110] = "Roentgenium";
        name[21] = "Titanium";                     name[51] = "Tellurium";                name[81] = "Lead";                       name[111] = "Copernicium";
        name[22] = "Vanadium";                     name[52] = "Iodine";                   name[82] = "Bismuth";                    name[112] = "Nihonium";
        name[23] = "Chromium";                     name[53] = "Xenon";                    name[83] = "Polonium";                   name[113] = "Flerovium";
        name[24] = "Manganese";                    name[54] = "Caesium";                  name[84] = "Astatine";                   name[114] = "Moscovium";
        name[25] = "Iron";                         name[55] = "Barium";                   name[85] = "Radon";                      name[115] = "Livermorium";
        name[26] = "Cobalt";                       name[56] = "Lanthanum";                name[86] = "Francium";                   name[116] = "Ununseptium";
        name[27] = "Nickel";                       name[57] = "Cerium";                   name[87] = "Radium";                     name[117] = "Oganesson";
        name[28] = "Copper";                       name[58] = "Praseodymium";             name[88] = "Actinium";
        name[29] = "Zinc";                         name[59] = "Neodymium";                name[89] = "Thorium";
    }

    void get_name(int a)
    {
        cout << name[a] << endl;
    }

    // Original Name 
    void set_origin()
    {
        origin[0] = "the Greek 'hydro' and 'genes' meaning water-forming";
        origin[1] = "the Greek 'helios' meaning sun";
        origin[2] = "the Greek 'lithos' meaning stone";
        origin[3] = "the Greek name for beryl, 'beryllo'";
        origin[4] = "the Arabic 'buraq', which was the name for borax";
        origin[5] = "the Latin 'carbo', meaning charcoal";
        origin[6] = "the Greek 'nitron' and 'genes' meaning nitre-forming";
        origin[7] = "the Greek 'oxy' and 'genes' meaning acid-forming";
        origin[8] = "the Latin 'fluere', meaning to flow";
        origin[9] = "the Greek 'neos', meaning new";
        origin[10] = "its origin is the Latin word sodanum, which means “a cure for headache.”";
        origin[11] = "Magnesia, a district of Eastern Thessaly in Greece";
        origin[12] = "The Latin word “alumen” is derived from the Proto-Indo-European root “-alu*”, which means “bitter”";
        origin[13] = "the Latin 'silex' or 'silicis', meaning flint";
        origin[14] = "the Greek 'phosphoros', meaning bringer of light";
        origin[15] = "Either from the Sanskrit 'sulvere', or the Latin 'sulfurium', both names for sulfur";
        origin[16] = "the Greek 'chloros', meaning greenish yellow";
        origin[17] = "the Greek, 'argos', meaning idle";
        origin[18] = "The Latin name for the element is Kalium, and its origin is derived from the Arabic word “al-qaliyya”, which is related to the word alkali.";
        origin[19] = "the Latin 'calx' meaning lime";
        origin[20] = "it is derived from Scandia, which is the Latin name for Scandinavia, the region from which it was extracted";
        origin[21] = "Titans, the sons of the Earth goddess of Greek mythology";
        origin[22] = "Vanadis, an old Norse name for the Scandinavian goddess Freyja";
        origin[23] = "the Greek 'chroma', meaning colour";
        origin[24] = "from the black magnesium oxide, 'magnesia nigra'";
        origin[25] = "the Anglo-Saxon name iren";
        origin[26] = "the German word 'kobald', meaning goblin";
        origin[27] = "the shortened of the German 'kupfernickel' meaning St. Nicholas's copper";
        origin[28] = "derived from the Latin 'Cyprium aes', meaning a metal from Cyprus";
        origin[29] = "the German, 'zinc', meaning stone";
        origin[30] = "France";
        origin[31] = "Germany";
        origin[32] = "the Greek name 'arsenikon' for the yellow pigment orpiment";
        origin[33] = "Moon";
        origin[34] = "the Greek 'bromos' meaning stench";
        origin[35] = "the Greek 'kryptos', meaning hidden";
        origin[36] = "the Latin 'rubidius', meaning deepest red";
        origin[37] = "Strontian, a small town in Scotland";
        origin[38] = "Ytterby, Sweden";
        origin[39] = "the Persian 'zargun', meaning gold coloured";
        origin[40] = "Niobe, daughter of king Tantalus from Greek mythology";
        origin[41] = "the Greek 'molybdos' meaning lead";
        origin[42] = "the Greek 'tekhnetos' meaning artificial";
        origin[43] = "Russia";
        origin[44] = "the Greek 'rhodon', meaning rose coloured";
        origin[45] = "the then recently-discovered asteroid Pallas, considered a planet at the time";
        origin[46] = "the Anglo-Saxon name siolfur";
        origin[47] = "the Latin name for the mineral calmine, 'cadmia'";
        origin[48] = "the Latin 'indicium', meaning violet or indigo";
        origin[49] = "the Anglo-Saxon word tin";
        origin[50] = "the Greek 'anti – monos', meaning not alone";
        origin[51] = "Earth, the third planet on solar system";
        origin[52] = "the Greek 'iodes' meaning violet";
        origin[53] = "the Greek 'xenos' meaning stranger";
        origin[54] = "the Latin 'caesius', meaning sky blue";
        origin[55] = "the Greek 'barys', meaning heavy";
        origin[56] = "the Greek 'lanthanein', meaning to lie hidden";
        origin[57] = "Ceres, the Roman God of agriculture";
        origin[58] = "the Greek 'prasios didymos' meaning green twin";
        origin[59] = "the Greek 'neos didymos' meaning new twin";
        origin[60] = "Prometheus of Greek mythology who stole fire from the Gods and gave it to humans";
        origin[61] = "Samarskite, the name of the mineral from which it was first isolated";
        origin[62] = "Europe";
        origin[63] = "Johan Gadolin, chemist, physicist and mineralogist";
        origin[64] = "Ytterby, Sweden";
        origin[65] = "the Greek 'dysprositos', meaning hard to get";
        origin[66] = "Stockholm, Sweden";
        origin[67] = "Ytterby, Sweden";
        origin[68] = "Thule, the ancient name for Scandinavia";
        origin[69] = "Ytterby, Sweden";
        origin[70] = "Paris, France";
        origin[71] = "Copenhagen, Denmark";
        origin[72] = "King Tantalus, father of Niobe from Greek mythology";
        origin[73] = "the Swedish 'tung sten' meaning heavy stone";
        origin[74] = "Rhine, a river";
        origin[75] = "the Greek 'osme', meaning smell";
        origin[76] = "Iris, the Greek goddess of the rainbow";
        origin[77] = "the Spanish 'platina', meaning little silver";
        origin[78] = "the Anglo-Saxon word gold";
        origin[79] = "Mercury, the first planet in the Solar System";
        origin[80] = "the Greek 'thallos', meaning a green twig";
        origin[81] = "the Anglo-Saxon lead";
        origin[82] = "the German 'Bisemutum' a corruption of 'Weisse Masse' meaning white mass";
        origin[83] = "Poland, the native country of Marie Curie, who first isolated the element";
        origin[84] = "the Greek 'astatos', meaning unstable";
        origin[85] = "From radium, as it was first detected as an emission from radium during radioactive decay";
        origin[86] = "France, where it was first discovered";
        origin[87] = "the Latin 'radius', meaning ray";
        origin[88] = "the Greek 'actinos', meaning a ray";
        origin[89] = "Thor, the Scandinavian god of thunder";
        origin[90] = "the Greek 'protos', as a prefix to the element actinium";
        origin[91] = "Uranus, the seventh planet in the Solar System";
        origin[92] = "Neptune, the eighth planet in the Solar System";
        origin[93] = "Pluto, a dwarf planet in the Solar System";
        origin[94] = "Americas, the continent where the element was first synthesized";
        origin[95] = "Pierre Curie, a physicist, and Marie Curie, a physicist and chemist";
        origin[96] = "Berkeley, California, USA, where the element was first synthesized";
        origin[97] = "State of California, USA, where the element was first synthesized";
        origin[98] = "Albert Einstein, physicist";
        origin[99] = "Enrico Fermi, physicist";
        origin[100] = "Dmitri Mendeleyev, chemist and inventor";
        origin[101] = "Alfred Nobel, chemist, engineer, innovator, and armaments manufacturer";
        origin[102] = "Ernest O. Lawrence, physicist";
        origin[103] = "Ernest Rutherford, chemist and physicist";
        origin[104] = "Dubna, Russia";
        origin[105] = "Glenn T. Seaborg, scientist";
        origin[106] = "Hesse, Germany, where the element was first synthesized";
        origin[107] = "Lise Meitner, physicist";
        origin[108] = "Darmstadt, Germany, where the element was first synthesized";
        origin[109] = "Wilhelm Conrad Röntgen, physicist";
        origin[110] = "Nicolaus Copernicus, astronomer";
        origin[111] = "IUPAC systematic element name";
        origin[112] = "Georgy Flyorov, physicist";
        origin[113] = "IUPAC systematic element name";
        origin[114] = "Moscow region. It is the place where joint institute placed.";
        origin[115] = "Lawrence Livermore National Laboratory";
        origin[116] = "Latin";
        origin[117] = "Yuri Oganessian";
    }

    void get_origin(int a)
    {
        cout << origin[a] << endl;
    }

    // Atomic Number 
    void set_atomicnum()
    {
        for (int a = 0; a < 118; a++)
        {
            atomicnum[a] = a + 1;
        }
    }

    void get_atomicnum(int a)
    {
        cout << atomicnum[a] << endl;
    }

    // Atomic Weight 
    void set_atomicwgh()
    {
        atomicwgh[0] = 1.008;                           atomicwgh[30] = 69.723;                      atomicwgh[60] = 145;                      atomicwgh[90] = 231.03588;
        atomicwgh[1] = 4.002602;                        atomicwgh[31] = 72.630;                      atomicwgh[61] = 150.36;                   atomicwgh[91] = 238.02891;
        atomicwgh[2] = 6.94;                            atomicwgh[32] = 74.92160;                    atomicwgh[62] = 151.964;                  atomicwgh[92] = 237;
        atomicwgh[3] = 9.012182;                        atomicwgh[33] = 78.96;                       atomicwgh[63] = 157.25;                   atomicwgh[93] = 244;
        atomicwgh[4] = 10.81;                           atomicwgh[34] = 79.904;                      atomicwgh[64] = 158.92535;                atomicwgh[94] = 243;
        atomicwgh[5] = 12.011;                          atomicwgh[35] = 83.798;                      atomicwgh[65] = 162.500;                  atomicwgh[95] = 247;
        atomicwgh[6] = 14.007;                          atomicwgh[36] = 85.4678;                     atomicwgh[66] = 164.93032;                atomicwgh[96] = 247;
        atomicwgh[7] = 15.999;                          atomicwgh[37] = 87.62;                       atomicwgh[67] = 167.259;                  atomicwgh[97] = 251;
        atomicwgh[8] = 18.9984032;                      atomicwgh[38] = 88.90585;                    atomicwgh[68] = 168.93421;                atomicwgh[98] = 252;
        atomicwgh[9] = 20.1797;                         atomicwgh[39] = 91.224;                      atomicwgh[69] = 173.054;                  atomicwgh[99] = 257;
        atomicwgh[10] = 22.98976928;                    atomicwgh[40] = 92.90638;                    atomicwgh[70] = 174.9668;                 atomicwgh[100] = 258;
        atomicwgh[11] = 24.305;                         atomicwgh[41] = 95.96;                       atomicwgh[71] = 178.49;                   atomicwgh[101] = 259;
        atomicwgh[12] = 26.981538;                      atomicwgh[42] = 98;                          atomicwgh[72] = 180.94788;                atomicwgh[102] = 262;
        atomicwgh[13] = 28.085;                         atomicwgh[43] = 101.07;                      atomicwgh[73] = 183.84;                   atomicwgh[103] = 267;
        atomicwgh[14] = 30.973762;                      atomicwgh[44] = 102.90550;                   atomicwgh[74] = 186.207;                  atomicwgh[104] = 268;
        atomicwgh[15] = 32.06;                          atomicwgh[45] = 106.42;                      atomicwgh[75] = 190.23;                   atomicwgh[105] = 269;
        atomicwgh[16] = 35.45;                          atomicwgh[46] = 107.8682;                    atomicwgh[76] = 192.217;                  atomicwgh[106] = 270;
        atomicwgh[17] = 39.948;                         atomicwgh[47] = 112.411;                     atomicwgh[77] = 195.084;                  atomicwgh[107] = 269;
        atomicwgh[18] = 39.0983;                        atomicwgh[48] = 114.818;                     atomicwgh[78] = 196.966569;               atomicwgh[108] = 278;
        atomicwgh[19] = 40.078;                         atomicwgh[49] = 118.710;                     atomicwgh[79] = 200.592;                  atomicwgh[109] = 281;
        atomicwgh[20] = 44.955912;                      atomicwgh[50] = 121.760;                     atomicwgh[80] = 204.38;                   atomicwgh[110] = 281;
        atomicwgh[21] = 47.867;                         atomicwgh[51] = 127.607;                     atomicwgh[81] = 207.2;                    atomicwgh[111] = 285;
        atomicwgh[22] = 50.9415;                        atomicwgh[52] = 126.90447;                   atomicwgh[82] = 208.98040;                atomicwgh[112] = 286;
        atomicwgh[23] = 51.9961;                        atomicwgh[53] = 131.293;                     atomicwgh[83] = 209;                      atomicwgh[113] = 289;
        atomicwgh[24] = 54.938045;                      atomicwgh[54] = 132.9054519;                 atomicwgh[84] = 210;                      atomicwgh[114] = 290;
        atomicwgh[25] = 55.845;                         atomicwgh[55] = 137.327;                     atomicwgh[85] = 222;                      atomicwgh[115] = 292;
        atomicwgh[26] = 58.933195;                      atomicwgh[56] = 138.90547;                   atomicwgh[86] = 223;                      atomicwgh[116] = 294;
        atomicwgh[27] = 58.6934;                        atomicwgh[57] = 140.90765;                   atomicwgh[87] = 226;                      atomicwgh[117] = 294;
        atomicwgh[28] = 63.546;                         atomicwgh[58] = 140.90765;                   atomicwgh[88] = 227;
        atomicwgh[29] = 65.38;                          atomicwgh[59] = 144.242;                     atomicwgh[89] = 232.03806;
    }

    void get_atomicwgh(int a)
    {
        cout << atomicwgh[a] << " u " << endl;
    }

    // Atomic Radious
    void set_atomicrad()
    {
        atomicrad[0] = 53;                           atomicrad[30] = 136;                       atomicrad[60] = 205;                     atomicrad[90] = 243;
        atomicrad[1] = 31;                           atomicrad[31] = 125;                       atomicrad[61] = 238;                     atomicrad[91] = 240;
        atomicrad[2] = 167;                          atomicrad[32] = 114;                       atomicrad[62] = 231;                     atomicrad[92] = 221;
        atomicrad[3] = 112;                          atomicrad[33] = 103;                       atomicrad[63] = 233;                     atomicrad[93] = 243;
        atomicrad[4] = 87;                           atomicrad[34] = 94;                        atomicrad[64] = 225;                     atomicrad[94] = 244;
        atomicrad[5] = 67;                           atomicrad[35] = 88;                        atomicrad[65] = 228;                     atomicrad[95] = 245;
        atomicrad[6] = 56;                           atomicrad[36] = 265;                       atomicrad[66] = 226;                     atomicrad[96] = 244;
        atomicrad[7] = 48;                           atomicrad[37] = 219;                       atomicrad[67] = 226;                     atomicrad[97] = 245;
        atomicrad[8] = 42;                           atomicrad[38] = 212;                       atomicrad[68] = 222;                     atomicrad[98] = 245;
        atomicrad[9] = 38;                           atomicrad[39] = 206;                       atomicrad[69] = 222;                     atomicrad[99] = 0;
        atomicrad[10] = 190;                         atomicrad[40] = 198;                       atomicrad[70] = 217;                     atomicrad[100] = 0;
        atomicrad[11] = 145;                         atomicrad[41] = 190;                       atomicrad[71] = 208;                     atomicrad[101] = 0;
        atomicrad[12] = 118;                         atomicrad[42] = 183;                       atomicrad[72] = 200;                     atomicrad[102] = 0;
        atomicrad[13] = 111;                         atomicrad[43] = 178;                       atomicrad[73] = 193;                     atomicrad[103] = 157;
        atomicrad[14] = 98;                          atomicrad[44] = 173;                       atomicrad[74] = 188;                     atomicrad[104] = 149;
        atomicrad[15] = 88;                          atomicrad[45] = 169;                       atomicrad[75] = 185;                     atomicrad[105] = 143;
        atomicrad[16] = 79;                          atomicrad[46] = 165;                       atomicrad[76] = 180;                     atomicrad[106] = 141;
        atomicrad[17] = 71;                          atomicrad[47] = 161;                       atomicrad[77] = 177;                     atomicrad[107] = 134;
        atomicrad[18] = 243;                         atomicrad[48] = 156;                       atomicrad[78] = 174;                     atomicrad[108] = 128;
        atomicrad[19] = 194;                         atomicrad[49] = 145;                       atomicrad[79] = 171;                     atomicrad[109] = 128;
        atomicrad[20] = 184;                         atomicrad[50] = 133;                       atomicrad[80] = 156;                     atomicrad[110] = 121;
        atomicrad[21] = 176;                         atomicrad[51] = 123;                       atomicrad[81] = 154;                     atomicrad[111] = 122;
        atomicrad[22] = 171;                         atomicrad[52] = 115;                       atomicrad[82] = 143;                     atomicrad[112] = 175;
        atomicrad[23] = 166;                         atomicrad[53] = 108;                       atomicrad[83] = 135;                     atomicrad[113] = 175;
        atomicrad[24] = 161;                         atomicrad[54] = 298;                       atomicrad[84] = 127;                     atomicrad[114] = 157;
        atomicrad[25] = 156;                         atomicrad[55] = 253;                       atomicrad[85] = 120;                     atomicrad[115] = 164;
        atomicrad[26] = 152;                         atomicrad[56] = 226;                       atomicrad[86] = 348;                     atomicrad[116] = 0;
        atomicrad[27] = 149;                         atomicrad[57] = 210;                       atomicrad[87] = 283;                     atomicrad[117] = 152;
        atomicrad[28] = 145;                         atomicrad[58] = 247;                       atomicrad[88] = 260;
        atomicrad[29] = 142;                         atomicrad[59] = 206;                       atomicrad[89] = 237;
    }

    void get_atomicrad(int a)
    {
        if (atomicrad[a] == 0)
        {
            cout << "Unknown" << endl;
        }
        else
        {
            cout << atomicrad[a] << " pm" << endl;
        }
    }

    // Melt point
    void set_meltp()
    {
        meltp[0] = 14.01;                           meltp[30] = 302.9146;                       meltp[60] = 1315;                          meltp[90] = 1841;
        meltp[1] = 0.95;                            meltp[31] = 1211.40;                        meltp[61] = 1345;                          meltp[91] = 1405.3;
        meltp[2] = 453.69;                          meltp[32] = 1090;                           meltp[62] = 1099;                          meltp[92] = 917;
        meltp[3] = 1560;                            meltp[33] = 453;                            meltp[63] = 1585;                          meltp[93] = 912.5;
        meltp[4] = 2349;                            meltp[34] = 265.8;                          meltp[64] = 1629;                          meltp[94] = 1449;
        meltp[5] = 3800;                            meltp[35] = 115.79;                         meltp[65] = 1680;                          meltp[95] = 1613;
        meltp[6] = 63.15;                           meltp[36] = 312.46;                         meltp[66] = 1734;                          meltp[96] = 1259;
        meltp[7] = 54.36;                           meltp[37] = 1050;                           meltp[67] = 1802;                          meltp[97] = 1173;
        meltp[8] = 53.53;                           meltp[38] = 1799;                           meltp[68] = 1818;                          meltp[98] = 1133;
        meltp[9] = 24.56;                           meltp[39] = 2128;                           meltp[69] = 1097;                          meltp[99] = 1125;
        meltp[10] = 370.87;                         meltp[40] = 2750;                           meltp[70] = 1925;                          meltp[100] = 1100;
        meltp[11] = 923;                            meltp[41] = 2896;                           meltp[71] = 2506;                          meltp[101] = 1100;
        meltp[12] = 933.47;                         meltp[42] = 2430;                           meltp[72] = 3290;                          meltp[102] = 1900;
        meltp[13] = 1687;                           meltp[43] = 2607;                           meltp[73] = 3695;                          meltp[103] = 2400;
        meltp[14] = 317.30;                         meltp[44] = 2237;                           meltp[74] = 3459;                          meltp[104] = 0;
        meltp[15] = 388.36;                         meltp[45] = 1828.05;                        meltp[75] = 3306;                          meltp[105] = 0;
        meltp[16] = 171.6;                          meltp[46] = 1234.93;                        meltp[76] = 2719;                          meltp[106] = 0;
        meltp[17] = 83.80;                          meltp[47] = 594.22;                         meltp[77] = 2041.4;                        meltp[107] = 0;
        meltp[18] = 336.53;                         meltp[48] = 429.75;                         meltp[78] = 1337.33;                       meltp[108] = 0;
        meltp[19] = 1115;                           meltp[49] = 505.08;                         meltp[79] = 234.43;                        meltp[109] = 0;
        meltp[20] = 1814;                           meltp[50] = 903.78;                         meltp[80] = 577;                           meltp[110] = 0;
        meltp[21] = 1941;                           meltp[51] = 722.66;                         meltp[81] = 600.61;                        meltp[111] = 0;
        meltp[22] = 2183;                           meltp[52] = 386.85;                         meltp[82] = 544.7;                         meltp[112] = 700;
        meltp[23] = 2180;                           meltp[53] = 161.4;                          meltp[83] = 527;                           meltp[113] = 340;
        meltp[24] = 1519;                           meltp[54] = 301.59;                         meltp[84] = 575;                           meltp[114] = 700;
        meltp[25] = 1811;                           meltp[55] = 1000;                           meltp[85] = 202;                           meltp[115] = 0;
        meltp[26] = 1768;                           meltp[56] = 1193;                           meltp[86] = 300;                           meltp[116] = 0;
        meltp[27] = 1728;                           meltp[57] = 1068;                           meltp[87] = 973;                           meltp[117] = 0;
        meltp[28] = 1357.77;                        meltp[58] = 1208;                           meltp[88] = 1323;
        meltp[29] = 692.88;                         meltp[59] = 1297;                           meltp[89] = 2115;
    }

    void get_meltp(int a)
    {
        if (meltp[a] == 0)
        {
            cout << "Unknown" << endl;
        }
        else
        {
            cout << meltp[a] << " K" << endl;
        }
    }

    // Electron Negativity
    void set_en()
    {
        en[0] = 2.20;      en[29] = 1.65;      en[58] = 1.13;     en[87] = 0.9;    en[116] = 0;
        en[1] = 0;         en[30] = 1.81;      en[59] = 1.14;     en[88] = 1.1;    en[117] = 0;
        en[2] = 0.98;      en[31] = 2.01;      en[60] = 0;        en[89] = 1.3;
        en[3] = 1.57;      en[32] = 2.18;      en[61] = 1.17;     en[90] = 1.5;
        en[4] = 2.04;      en[33] = 2.55;      en[62] = 0;        en[91] = 1.38;
        en[5] = 2.55;      en[34] = 2.96;      en[63] = 1.20;     en[92] = 1.36;
        en[6] = 3.04;      en[35] = 3.00;      en[64] = 0;        en[93] = 1.28;
        en[7] = 3.44;      en[36] = 0.82;      en[65] = 1.22;     en[94] = 1.3;
        en[8] = 3.98;      en[37] = 0.95;      en[66] = 1.23;     en[95] = 1.3;
        en[9] = 0;         en[38] = 1.22;      en[67] = 1.24;     en[96] = 1.3;
        en[10] = 0.93;     en[39] = 1.33;      en[68] = 1.25;     en[97] = 1.3;
        en[11] = 1.31;     en[40] = 1.6;       en[69] = 0;        en[98] = 1.3;
        en[12] = 1.61;     en[41] = 2.16;      en[70] = 1.27;     en[99] = 1.3;
        en[13] = 1.90;     en[42] = 1.9;       en[71] = 1.3;      en[100] = 1.3;
        en[14] = 2.19;     en[43] = 2.2;       en[72] = 1.5;      en[101] = 1.3;
        en[15] = 2.58;     en[44] = 2.28;      en[73] = 2.36;     en[102] = 1.3;
        en[16] = 3.16;     en[45] = 2.20;      en[74] = 1.9;      en[103] = 1.3;
        en[17] = 0;        en[46] = 1.93;      en[75] = 2.2;      en[104] = 1.3;
        en[18] = 0.82;     en[47] = 1.69;      en[76] = 2.20;     en[105] = 0;
        en[19] = 1.00;     en[48] = 1.78;      en[77] = 2.28;     en[106] = 0;
        en[20] = 1.36;     en[49] = 1.96;      en[78] = 2.54;     en[107] = 0;
        en[21] = 1.54;     en[50] = 2.05;      en[79] = 2.00;     en[108] = 0;
        en[22] = 1.63;     en[51] = 2.1;       en[80] = 1.62;     en[109] = 0;
        en[23] = 1.66;     en[52] = 2.66;      en[81] = 2.33;     en[110] = 0;
        en[24] = 1.55;     en[53] = 2.6;       en[82] = 2.02;     en[111] = 0;
        en[25] = 1.83;     en[54] = 0.79;      en[83] = 2.0;      en[112] = 0;
        en[26] = 1.88;     en[55] = 0.89;      en[84] = 2.2;      en[113] = 0;
        en[27] = 1.91;     en[56] = 1.10;      en[85] = 0;        en[114] = 0;
        en[28] = 1.90;     en[57] = 1.12;      en[86] = 0.7;      en[115] = 0;
    }

    void get_en(int a)
    {
        if (en[a] == 0)
        {
            cout << "Unknown" << endl;
        }
        else
        {
            cout << en[a] << endl;
        }
    }

    // Electron Configuration
    void set_ec()
    {
        ec[0] = "1s1";            ec[30] = "[Ar] 3d10 4s2 4p1"; ec[60] = "[Xe] 4f5 6s2";           ec[90] = "[Rn] 5f2 6d1 7s2";
        ec[1] = "1s2";            ec[31] = "[Ar] 3d10 4s2 4p2"; ec[61] = "[Xe] 4f6 6s2";           ec[91] = "[Rn] 5f3 6d1 7s2";
        ec[2] = "[He] 2s1";       ec[32] = "[Ar] 3d10 4s2 4p3"; ec[62] = "[Xe] 4f7 6s2";           ec[92] = "[Rn] 5f4 6d1 7s2";
        ec[3] = "[He] 2s2";       ec[33] = "[Ar] 3d10 4s2 4p4"; ec[63] = "4f7 5d1 6s2";            ec[93] = "[Rn] 5f6 7s2";
        ec[4] = "[He] 2s2 2p1";   ec[34] = "[Ar] 3d10 4s2 4p5"; ec[64] = "[Xe] 4f9 6s2";           ec[94] = "[Rn] 5f7 7s2";
        ec[5] = "[He] 2s2 2p2";   ec[35] = "[Ar] 3d10 4s2 4p6"; ec[65] = "[Xe] 4f10 6s2";          ec[95] = "[Rn] 5f7 6d1 7s2";
        ec[6] = "[He] 2s2 2p3";   ec[36] = "[Kr] 5s1";          ec[66] = "[Xe] 4f11 6s2";          ec[96] = "[Rn] 5f9 7s2";
        ec[7] = "[He] 2s2 2p4";   ec[37] = "[Kr] 5s2";          ec[67] = "[Xe] 4f12 6s2";          ec[97] = "[Rn] 5f10 7s2";
        ec[8] = "[He] 2s2 2p5";   ec[38] = "[Kr] 4d1 5s2";      ec[68] = "[Xe] 4f13 6s2";          ec[98] = "[Rn] 5f11 7s2";
        ec[9] = "[He] 2s2 2p6";   ec[39] = "[Kr] 4d2 5s2";      ec[69] = "[Xe] 4f14 6s2";          ec[99] = "[Rn] 5f12 7s2";
        ec[10] = "[Ne] 3s1";      ec[40] = "[Kr] 4d4 5s1";      ec[70] = "[Xe] 4f14 5d1 6s2";      ec[100] = "[Rn] 5f13 7s2";
        ec[11] = "[Ne] 3s2";      ec[41] = "[Kr] 4d5 5s1";      ec[71] = "[Xe] 4f14 5d2 6s2";      ec[101] = "[Rn] 5f14 7s2";
        ec[12] = "[Ne] 3s2 3p1";  ec[42] = "[Kr] 4d5 5s2";      ec[72] = "[Xe] 4f14 5d3 6s2";      ec[102] = "[Rn] 5f14 7s2 7p1";
        ec[13] = "[Ne] 3s2 3p2";  ec[43] = "[Kr] 4d7 5s1";      ec[73] = "[Xe] 4f14 5d4 6s2";      ec[103] = "[Rn] 5f14 6d2 7s2";
        ec[14] = "[Ne] 3s2 3p3";  ec[44] = "[Kr] 4d8 5s1";      ec[74] = "[Xe] 4f14 5d5 6s2";      ec[104] = "[Rn] 5f14 6d3 7s2";
        ec[15] = "[Ne] 3s2 3p4";  ec[45] = "[Kr] 4d10";         ec[75] = "[Xe] 4f14 5d6 6s2";      ec[105] = "[Rn] 5f14 6d4 7s2";
        ec[16] = "[Ne] 3s2 3p5";  ec[46] = "[Kr] 4d10 5s1";     ec[76] = "[Xe] 4f14 5d7 6s2";      ec[106] = "[Rn] 5f14 6d5 7s2";
        ec[17] = "[Ne] 3s2 3p6";  ec[47] = "[Kr] 4d10 5s2";     ec[77] = "[Xe] 4f14 5d9 6s1";      ec[107] = "[Rn] 5f14 6d6 7s2";
        ec[18] = "[Ar] 4s1";      ec[48] = "[Kr] 4d10 5s2 5p1"; ec[78] = "[Xe] 4f14 5d10 6s1";     ec[108] = "[Rn] 5f14 6d7 7s2";
        ec[19] = "[Ar] 4s2";      ec[49] = "[Kr] 4d10 5s2 5p2"; ec[79] = "[Xe] 4f14 5d10 6s2";     ec[109] = "[Rn] 5f14 6d8 7s2";
        ec[20] = "[Ar] 3d1 4s2";  ec[50] = "[Kr] 4d10 5s2 5p3"; ec[80] = "[Xe] 4f14 5d10 6s2 6p1"; ec[110] = "[Rn] 5f14 6d9 7s2";
        ec[21] = "[Ar] 3d2 4s2";  ec[51] = "[Kr] 4d10 5s2 5p4"; ec[81] = "[Xe] 4f14 5d10 6s2 6p2"; ec[111] = "[Rn] 5f14 6d10 7s2";
        ec[22] = "[Ar] 3d3 4s2";  ec[52] = "[Kr] 4d10 5s2 5p5"; ec[82] = "[Xe] 4f14 5d10 6s2 6p3"; ec[112] = "[Rn] 5f14 6d10 7s2 7p1";
        ec[23] = "[Ar] 3d5 4s1";  ec[53] = "[Kr] 4d10 5s2 5p6"; ec[83] = "[Xe] 4f14 5d10 6s2 6p4"; ec[113] = "[Rn] 5f14 6d10 7s2 7p2";
        ec[24] = "[Ar] 3d5 4s2";  ec[54] = "[Xe] 6s1";          ec[84] = "[Xe] 4f14 5d10 6s2 6p5"; ec[114] = "[Rn] 5f14 6d10 7s2 7p3";
        ec[25] = "[Ar] 3d6 4s2";  ec[55] = "[Xe] 6s2";          ec[85] = "[Xe] 4f14 5d10 6s2 6p6"; ec[115] = "[Rn] 5f14 6d10 7s2 7p4";
        ec[26] = "[Ar] 3d7 4s2";  ec[56] = "[Xe] 5d1 6s2";      ec[86] = "[Rn] 7s1";               ec[116] = "[Rn] 5f14 6d10 7s2 7p5";
        ec[27] = "[Ar] 3d8 4s2";  ec[57] = "[Xe] 4f1 5d1 6s2";  ec[87] = "[Rn] 7s2";               ec[117] = "[Rn] 5f14 6d10 7s2 7p6";
        ec[28] = "[Ar] 3d10 4s1"; ec[58] = "[Xe] 4f3 6s2";      ec[88] = "[Rn] 6d1 7s2";
        ec[29] = "[Ar] 3d10 4s2"; ec[59] = "[Xe] 4f4 6s2";      ec[89] = "[Rn] 6d2 7s2";
    }

    void get_ec(int a)
    {
        cout << ec[a] << endl;
    }

    // Density
    void set_density()
    {
        density[0] = 0.00008988;    density[30] = 5.907;       density[60] = 7.26;    density[90] = 15.37;
        density[1] = 0.0001785;     density[31] = 5.323;       density[61] = 7.52;    density[91] = 18.95;
        density[2] = 0.534;         density[32] = 5.776;       density[62] = 5.243;   density[92] = 20.45;
        density[3] = 1.85;          density[33] = 4.809;       density[63] = 7.895;   density[93] = 19.84;
        density[4] = 2.34;          density[34] = 3.122;       density[64] = 8.229;   density[94] = 13.69;
        density[5] = 2.267;         density[35] = 0.003733;    density[65] = 8.55;    density[95] = 13.51;
        density[6] = 0.0012506;     density[36] = 1.532;       density[66] = 8.795;   density[96] = 14.79;
        density[7] = 0.001429;      density[37] = 2.64;        density[67] = 9.066;   density[97] = 15.1;
        density[8] = 0.001696;      density[38] = 4.469;       density[68] = 9.321;   density[98] = 8.84;
        density[9] = 0.0008999;     density[39] = 6.506;       density[69] = 6.965;   density[99] = 0;
        density[10] = 0.971;        density[40] = 8.57;        density[70] = 9.84;    density[100] = 0;
        density[11] = 1.738;        density[41] = 10.22;       density[71] = 13.31;   density[101] = 0;
        density[12] = 2.698;        density[42] = 11.5;        density[72] = 16.654;  density[102] = 0;
        density[13] = 2.3296;       density[43] = 12.37;       density[73] = 19.25;   density[103] = 23.2;
        density[14] = 1.82;         density[44] = 12.41;       density[74] = 21.02;   density[104] = 29.3;
        density[15] = 2.067;        density[45] = 12.02;       density[75] = 22.61;   density[105] = 35.0;
        density[16] = 0.003214;     density[46] = 10.501;      density[76] = 22.56;   density[106] = 37.1;
        density[17] = 0.0017837;    density[47] = 8.69;        density[77] = 21.46;   density[107] = 40.7;
        density[18] = 0.862;        density[48] = 7.31;        density[78] = 19.282;  density[108] = 37.4;
        density[19] = 1.54;         density[49] = 7.287;       density[79] = 13.5336; density[109] = 34.8;
        density[20] = 2.989;        density[50] = 6.685;       density[80] = 11.85;   density[110] = 28.7;
        density[21] = 4.54;         density[51] = 6.232;       density[81] = 11.342;  density[111] = 23.7;
        density[22] = 6.11;         density[52] = 4.93;        density[82] = 9.807;   density[112] = 16;
        density[23] = 7.15;         density[53] = 0.005887;    density[83] = 9.32;    density[113] = 14;
        density[24] = 7.44;         density[54] = 1.873;       density[84] = 7;       density[114] = 13.5;
        density[25] = 7.874;        density[55] = 3.594;       density[85] = 0.00973; density[115] = 12.9;
        density[26] = 8.86;         density[56] = 6.145;       density[86] = 1.87;    density[116] = 7.1;
        density[27] = 8.912;        density[57] = 6.77;        density[87] = 5.5;     density[117] = 0;
        density[28] = 8.96;         density[58] = 6.773;       density[88] = 10.07;
        density[29] = 7.134;        density[59] = 7.007;       density[89] = 11.72;
    }

    void get_density(int a)
    {
        if (density[a] == 0)
        {
            cout << "Unknown" << endl;
        }
        else
        {
            cout << density[a] << " g/cm3" << endl;
        }
    }

    // Boil Point
    void set_boilp()
    {
        boilp[0] = 20.28;
        boilp[1] = 4.22;
        boilp[2] = 1560;
        boilp[3] = 2742;
        boilp[4] = 4200;
        boilp[5] = 4300;
        boilp[6] = 77.36;
        boilp[7] = 90.20;
        boilp[8] = 85.03;
        boilp[9] = 27.07;
        boilp[10] = 1156;
        boilp[11] = 1363;
        boilp[12] = 2792;
        boilp[13] = 3538;
        boilp[14] = 550;
        boilp[15] = 717.87;
        boilp[16] = 239.11;
        boilp[17] = 87.30;
        boilp[18] = 1032;
        boilp[19] = 1757;
        boilp[20] = 3109;
        boilp[21] = 3560;
        boilp[22] = 3680;
        boilp[23] = 2944;
        boilp[24] = 2334;
        boilp[25] = 3134;
        boilp[26] = 3200;
        boilp[27] = 3186;
        boilp[28] = 2835;
        boilp[29] = 1180;
        boilp[30] = 2477;
        boilp[31] = 3106;
        boilp[32] = 887;
        boilp[33] = 958;
        boilp[34] = 332.0;
        boilp[35] = 119.93;
        boilp[36] = 961;
        boilp[37] = 1655;
        boilp[38] = 3609;
        boilp[39] = 4682;
        boilp[40] = 5017;
        boilp[41] = 4912;
        boilp[42] = 4538;
        boilp[43] = 4423;
        boilp[44] = 3968;
        boilp[45] = 3236;
        boilp[46] = 2435;
        boilp[47] = 1040;
        boilp[48] = 2345;
        boilp[49] = 2875;
        boilp[50] = 1860;
        boilp[51] = 1261;
        boilp[52] = 457.4;
        boilp[53] = 165.03;
        boilp[54] = 944;
        boilp[55] = 2170;
        boilp[56] = 3737;
        boilp[57] = 3716;
        boilp[58] = 3793;
        boilp[59] = 3347;
        boilp[60] = 3273;
        boilp[61] = 2067;
        boilp[62] = 1802;
        boilp[63] = 3546;
        boilp[64] = 3503;
        boilp[65] = 2840;
        boilp[66] = 2993;
        boilp[67] = 3141;
        boilp[68] = 2223;
        boilp[69] = 1469;
        boilp[70] = 3675;
        boilp[71] = 4876;
        boilp[72] = 5731;
        boilp[73] = 5828;
        boilp[74] = 5869;
        boilp[75] = 5285;
        boilp[76] = 4701;
        boilp[77] = 4098;
        boilp[78] = 3129;
        boilp[79] = 629.88;
        boilp[80] = 1746;
        boilp[81] = 2022;
        boilp[82] = 1837;
        boilp[83] = 1235;
        boilp[84] = 610;
        boilp[85] = 211.3;
        boilp[86] = 950;
        boilp[87] = 2010;
        boilp[88] = 3471;
        boilp[89] = 5061;
        boilp[90] = 4300;
        boilp[91] = 4404;
        boilp[92] = 4273;
        boilp[93] = 3501;
        boilp[94] = 2880;
        boilp[95] = 3383;
        boilp[96] = 2900;
        boilp[97] = 1743;
        boilp[98] = 1269;
        boilp[99] = 0;
        boilp[100] = 0;
        boilp[101] = 0;
        boilp[102] = 0;
        boilp[103] = 0;
        boilp[104] = 0;
        boilp[105] = 0;
        boilp[106] = 0;
        boilp[107] = 0;
        boilp[108] = 0;
        boilp[109] = 0;
        boilp[110] = 0;
        boilp[111] = 357;
        boilp[112] = 1400;
        boilp[113] = 420;
        boilp[114] = 1400;
        boilp[115] = 0;
        boilp[116] = 0;
        boilp[117] = 0;
    }

    void get_boilp(int a)
    {
        if (boilp[a] == 0)
        {
            cout << "Unknown" << endl;
        }
        else
        {
            cout << boilp[a] << " K" << endl;
        }
    }

    // Period
    void get_period(int a)
    {
        if (a == 0 || a == 1) { cout << "1" << endl; }
        else if (2 <= a && a <= 9) { cout << "2" << endl; }
        else if (10 <= a && a <= 17) { cout << "3" << endl; }
        else if (18 <= a && a <= 35) { cout << "4" << endl; }
        else if (36 <= a && a <= 53) { cout << "5" << endl; }
        else if (54 <= a && a <= 85) { cout << "6" << endl; }
        else { cout << "7" << endl; }
    }

    // Properties
    void get_Prop(int t)
    {
        if (t == 0 || 5 <= t && t <= 8 || t == 14 || t == 15 || t == 16 || t == 33 || t == 34 || t == 52)
        {
            cout << "Reactive Nonmetal" << endl;
        }
        else if (t == 2 || t == 10 || t == 18 || t == 36 || t == 54 || t == 86)
        {
            cout << "Alkali Metal" << endl;
        }
        else if (t == 3 || t == 11 || t == 19 || t == 37 || t == 55 || t == 87)
        {
            cout << "Alkali Earth Metal" << endl;
        }
        else if (20 <= t && t <= 28 || 38 <= t && t <= 46 || 71 <= t && t <= 78 || 103 <= t && t <= 107)
        {
            cout << "Transition Metal" << endl;
        }
        else if (t == 12 || t == 29 || t == 30 || t == 47 || t == 48 || t == 49 || 79 <= t && t <= 83 || t == 111)
        {
            cout << "Post-transition Metal" << endl;
        }
        else if (t == 4 || t == 13 || t == 31 || t == 32 || t == 50 || t == 51 || t == 84)
        {
            cout << "Metalloid" << endl;
        }
        else if (t == 1 || t == 9 || t == 17 || t == 35 || t == 53 || t == 85)
        {
            cout << " 'Inert' Noble Gas" << endl;
        }
        else if (56 <= t && t <= 70) { cout << "Lanthanide" << endl; }
        else if (88 <= t && t <= 102) { cout << "Actinide" << endl; }
        else { cout << "Unknown Properties" << endl; }
    }

};

class blocks : public element
{
public:

    void get_block(int x)
    {
        if (x == 0 || x == 2 || x == 3 || x == 10 || x == 11 || x == 18 || x == 19 || x == 36 || x == 37 || x == 54 || x == 55 || x == 86 || x == 87)
        {
            cout << 's' << endl;
        }
        else if (20 <= x && x <= 29 || 38 <= x && x <= 47 || x == 56 || 71 <= x && x <= 79 || x == 88 || 103 <= x && x <= 111)
        {
            cout << 'd' << endl;
        }
        else if (x == 1 || 4 <= x && x <= 9 || 12 <= x && x <= 17 || 30 <= x && x <= 35 || 48 <= x && x <= 53 || 80 <= x && x <= 85 || 112 <= x && x <= 117)
        {
            cout << 'p' << endl;
        }
        else { cout << 'f' << endl; }
    }

    void get_group(int g)
    {
        if (g == 0 || g == 2 || g == 10 || g == 18 || g == 36 || g == 54 || g == 86)
        {
            cout << "1" << endl;
        }
        else if (g == 3 || g == 11 || g == 19 || g == 37 || g == 55 || g == 87)
        {
            cout << "2" << endl;
        }
        else if (g == 20 || g == 38 || g == 56 || g == 88)
        {
            cout << "3" << endl;
        }
        else if (g == 21 || g == 39 || g == 71 || g == 103)
        {
            cout << "4" << endl;
        }
        else if (g == 22 || g == 40 || g == 72 || g == 104)
        {
            cout << "5" << endl;
        }
        else if (g == 23 || g == 41 || g == 73 || g == 105)
        {
            cout << "6" << endl;
        }
        else if (g == 24 || g == 42 || g == 74 || g == 106)
        {
            cout << "7" << endl;
        }
        else if (g == 25 || g == 43 || g == 75 || g == 107)
        {
            cout << "8" << endl;
        }
        else if (g == 26 || g == 44 || g == 76 || g == 108)
        {
            cout << "9" << endl;
        }
        else if (g == 27 || g == 45 || g == 77 || g == 109)
        {
            cout << "10" << endl;
        }
        else if (g == 28 || g == 46 || g == 78 || g == 110)
        {
            cout << "11" << endl;
        }
        else if (g == 29 || g == 47 || g == 79 || g == 111)
        {
            cout << "12" << endl;
        }
        else if (g == 4 || g == 12 || g == 30 || g == 48 || g == 80 || g == 112)
        {
            cout << "13" << endl;
        }
        else if (g == 5 || g == 13 || g == 31 || g == 49 || g == 81 || g == 113)
        {
            cout << "14" << endl;
        }
        else if (g == 6 || g == 14 || g == 32 || g == 50 || g == 82 || g == 114)
        {
            cout << "15" << endl;
        }
        else if (g == 7 || g == 15 || g == 33 || g == 51 || g == 83 || g == 115)
        {
            cout << "16" << endl;
        }
        else if (g == 8 || g == 16 || g == 34 || g == 52 || g == 84 || g == 116)
        {
            cout << "17" << endl;
        }
        else if (g == 1 || g == 9 || g == 17 || g == 35 || g == 53 || g == 85 || g == 117)
        {
            cout << "18" << endl;
        }
        else { cout << "Not Available" << endl; }
    }
};

class output : public blocks
{
public:
    void get_output_symbol(string a)
    {
        for (int i = 0; i < 118; i++)
        {
            if (a == symbol[i])
            {
                cout << "\n\n\tSymbol \t\t\t\t\t\t";                  get_symbol(i);
                cout << "\tName \t\t\t\t\t\t";                        get_name(i);
                cout << "\tThe origin of name \t\t\t";                get_origin(i);
                cout << "\tAtomic number \t\t\t\t\t";                 get_atomicnum(i);
                cout << "\tElectronic Configuration \t\t\t";          get_ec(i);
                cout << "\tGroup \t\t\t\t\t\t";                       get_group(i);
                cout << "\tPeriod \t\t\t\t\t\t";                      get_period(i);
                cout << "\tBlock \t\t\t\t\t\t";                       get_block(i);
                cout << "\tProperties   \t\t\t\t";                    get_Prop(i);
                cout << "\tAtomic weight \t\t\t\t\t";                 get_atomicwgh(i);
                cout << "\tAtomic Radius \t\t\t\t\t";                 get_atomicrad(i);
                cout << "\tElectronegtivity \t\t\t\t";                get_en(i);
                cout << "\tMelting Point \t\t\t\t\t";                 get_meltp(i);
                cout << "\tBoiling Point \t\t\t\t\t";                 get_boilp(i);
                cout << "\tDensity \t\t\t\t\t";                       get_density(i); cout << "\n";
            }
        }
    }

    void get_output_name(string a)
    {
        for (int i = 0; i < 118; i++)
        {
            if (a == name[i])
            {
                cout << "\n\n\tSymbol \t\t\t\t\t\t";                  get_symbol(i);
                cout << "\tName \t\t\t\t\t\t";                        get_name(i);
                cout << "\tThe origin of name \t\t\t";                get_origin(i);
                cout << "\tAtomic number \t\t\t\t\t";                 get_atomicnum(i);
                cout << "\tElectronic Configuration \t\t\t";          get_ec(i);
                cout << "\tGroup \t\t\t\t\t\t";                       get_group(i);
                cout << "\tPeriod \t\t\t\t\t\t";                      get_period(i);
                cout << "\tBlock \t\t\t\t\t\t";                       get_block(i);
                cout << "\tProperties   \t\t\t\t";                    get_Prop(i);
                cout << "\tAtomic weight \t\t\t\t\t";                 get_atomicwgh(i);
                cout << "\tAtomic Radius \t\t\t\t\t";                 get_atomicrad(i);
                cout << "\tElectronegtivity \t\t\t\t";                get_en(i);
                cout << "\tMelting Point \t\t\t\t\t";                 get_meltp(i);
                cout << "\tBoiling Point \t\t\t\t\t";                 get_boilp(i);
                cout << "\tDensity \t\t\t\t\t";                       get_density(i); cout << "\n";
            }
        }
    }

    bool check_symbol(string a)
    {
        return find(begin(symbol), end(symbol), a) != end(symbol);
    }

    bool check_name(string a)
    {
        return find(begin(name), end(name), a) != end(name);
    }
};

void displaypt()
{
    cout << "\n\t\t\tTHE MODERN PERIODIC TABLE\n";
    cout << "\t\t\t-------------------------\n";
    cout << "\tH                                                        He" << "\n\n";
    cout << "\tLi Be                                   B  C   N  O   F  Ne" << "\n\n";
    cout << "\tNa Mg                                   Al Si  P  S   Cl Ar" << "\n\n";
    cout << "\tK  Ca   Sc Ti V  Cr Mn Fe Co Ni Cu  Zn  Ga Ge  As Se  Br Kr" << "\n\n";
    cout << "\tRb Sr   Y  Zr Nb Mo Tc Ru Rh Pd Ag  Cd  In Sn  Sb Te  I  Xe" << "\n\n";
    cout << "\tCs Ba * La Hf Ta W  Re Os Ir Pt Au  Hg  Tl Pb  Bi Po  At Rn" << "\n\n";
    cout << "\tFr Ra # Ac Rf Db Sg Bh Hs Mt Ds Rg  Cn  Nh Fl  Mc Lv  Ts Og" << "\n\n\n";
    cout << "\t\t* Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu" << "\n\n";
    cout << "\t\t# Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr" << "\n\n\n";
}

void main()
{
    output* elm = new output;
    // Call to the Sets of the class
    {
        elm->set_symbol();
        elm->set_name();
        elm->set_atomicnum();
        elm->set_origin();
        elm->set_atomicwgh();
        elm->set_atomicrad();
        elm->set_density();
        elm->set_ec();
        elm->set_en();
        elm->set_meltp();
        elm->set_boilp();
    }

    int option, ATN, choose1, choose2, choose3, trying = 0;

    char choice, sure1, sure2, sure3;

    string name, sym;

    displaypt();

    system("PAUSE");
start:
    system("cls");
    cout << "\n\tWould you like to search with:-\n\n";
    cout << "\t1- Entering the Element Symbol? \t2- Entering the Atomic Number? \t3- Entering the Element Name?\n\n";
    cout << "\tEnter Your option ( 1 / 2 / 3 ) = \t";
    cin >> option;

    if (option == 1)
    {
    one:
        system("cls");
        cout << "\n\n\tPlease make sure the Symbol is correct\n\n";
        cout << "\tPlease enter your Symbol =  ";
        cin >> sym;

        // Make validation to the characters
        if (!sym.empty())
        {
            sym[0] = toupper(sym[0]);
            for (int i = 1; i < sym.length(); i++)
            {
                sym[i] = tolower(sym[i]);
            }
        }

        if (elm->check_symbol(sym)) // If true, the output will display
        {
            elm->get_output_symbol(sym);
            cout << "\n\n";
            system("pause");
        }
        else 
        {
            cout << "\n\n\t\tWrong Symbol\n\n";
            Sleep(1500);
        five:
            if (trying < 2)
            {
                trying++;
                goto one;
            }
            trying = 0;
            system("cls");
            cout << "\n\n\tDo you want to keep searching with Element Symbol or try to search with Another option?   \n";
            cout << "\t1- Keep searching with Element Symbol\t\t\t2- Try search with Another option\n\n    ";
            cout << "\tEnter your option ( 1 / 2 ) = \t\t";

            cin >> choose1;

            if (choose1 == 1)
            {
                goto one;
            }
            else if (choose1 == 2)
            {
                goto start;
            }
            else
            {
                cout << "\n\tWrong choose\n\tTry again\n";
                Sleep(1500);
                goto five;
            }
        }
    }
    else if (option == 2)
    {
    two:
        system("cls");
        cout << "\n\n\tMake sure your Number is between 1 and 118\n\n";
        cout << "\tPlease enter your Atomic Number = "; cin >> ATN;
        if (ATN > 0 && ATN <= 118)
        {
            cout << "\n\n\tSymbol \t\t\t\t\t\t";               elm->get_symbol(ATN - 1);
            cout << "\tName \t\t\t\t\t\t";                     elm->get_name(ATN - 1);
            cout << "\tOrigin of the name \t\t\t";             elm->get_origin(ATN - 1);
            cout << "\tAtomic number \t\t\t\t\t";              elm->get_atomicnum(ATN - 1);
            cout << "\tElectronic Configuration \t\t\t";       elm->get_ec(ATN - 1);
            cout << "\tGroup \t\t\t\t\t\t";                    elm->get_group(ATN - 1);
            cout << "\tBlock \t\t\t\t\t\t";                    elm->get_block(ATN - 1);
            cout << "\tPeriod \t\t\t\t\t\t";                   elm->get_period(ATN - 1);
            cout << "\tProperties   \t\t\t\t";                 elm->get_Prop(ATN - 1);
            cout << "\tAtomic Weight \t\t\t\t\t";              elm->get_atomicwgh(ATN - 1);
            cout << "\tAtomic Radius \t\t\t\t\t";              elm->get_atomicrad(ATN - 1);
            cout << "\tElectronegativity \t\t\t\t";            elm->get_en(ATN - 1);
            cout << "\tMelting Point \t\t\t\t\t";              elm->get_meltp(ATN - 1);
            cout << "\tBoiling Point \t\t\t\t\t";              elm->get_boilp(ATN - 1);
            cout << "\tDensity \t\t\t\t\t";                    elm->get_density(ATN - 1);

            cout << "\n\n";
            system("pause");
        }
        else
        {
            cout << "\n\n\t\tWrong Atomic Number\n\n";
            Sleep(1500);
        seven:
            if (trying < 2)
            {
                trying++;
                goto two;
            }
            trying = 0;

            system("cls");
            cout << "\n\n\tDo you want to keep searching with Atomic Number or try to search with Another option?   \n";
            cout << "\t1- Keep searching with Atomic Number\t\t\t2- Try search with Another option\n\n    ";
            cout << "\tEnter your option ( 1 / 2 ) = \t\t";
            cin >> choose3;
            if (choose3 == 1)
            {
                goto two;
            }
            else if (choose3 == 2)
            {
                goto start;
            }
            else
            {
                cout << "\n\n\tWrong choose\n\tTry again\n";
                Sleep(1500);
                goto seven;
            }
        }
    }
    else if (option == 3)
    {
    three:
        system("cls");
        cout << "\n\n\tPlease make sure the spelling is Correct\n\n";
        cout << "\tPlease enter your Name =  "; cin >> name;

        // Make validation to the characters
        if (!name.empty())
        {
            name[0] = toupper(name[0]);
            for (int i = 1; i < name.length(); i++)
            {
                name[i] = tolower(name[i]);
            }
        }

        if (elm->check_name(name))
        {
            elm->get_output_name(name);
            cout << "\n\n";
            system("pause");
        }
        else
        {
            cout << "\n\n\t\tWrong Name\n\n";
            Sleep(1500);
        six:
            if (trying < 2)
            {
                trying++;
                goto three;
            }
            trying = 0;

            system("cls");
            cout << "\n\n\tDo you want to keep searching with Element Name or try to search with another option?   \n\n";
            cout << "\t1- Keep searching with Element Name\t\t\t2- Try search with Another option\n\n    ";
            cout << "\tEnter your option ( 1 / 2 ) = \t\t";
            cin >> choose2;
            if (choose2 == 1)
            {
                goto three;
            }
            if (choose2 == 2)
            {
                goto start;
            }
            else
            {
                cout << "\n\t Wrong option \n\n";
                Sleep(1500);
                cout << "\t Please try again" << endl;
                Sleep(1500);
                goto six;
            }
        }
    }
    else
    {
        cout << "\n\n\t\t\t   Wrong option\n\n\n\n";
        Sleep(1500);
        cout << "\t\t\t   Please try again" << endl;
        Sleep(1500);
        goto start;
    }
four:
    system("cls");
    cout << "\n\t Do you Want to Ask again?( Y / N )\n\t\t\t"; cin >> choice;
    if (choice == 'n' || choice == 'N')
    {
        cout << "\n\n\t\t Thank you, ";
        Sleep(1500);
        cout << "\n\n\t\t just remember this: ";
        Sleep(1500);
        cout << "\n\n\t\t You think there is color. ";
        Sleep(1500);
        cout << "\n\n\t\t You think there is a sweet taste. ";
        Sleep(1500);
        cout << "\n\n\t\t You think there is a bitter taste. ";
        Sleep(1500);
        cout << "\n\n\t\t But in reality there are Atoms and Emptiness\n\n\n";
        Sleep(1500);
        exit(0);
        delete elm;
    }
    else if (choice == 'y' || choice == 'Y')
    {
        goto start;
    }
    else
    {
        cout << "\n\tWrong choose\n\tTry again\n";
        Sleep(1500);
        goto four;
    }
}