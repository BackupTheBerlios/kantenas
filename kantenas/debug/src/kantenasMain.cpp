#include <klocale.h>
/****************************************************************************
** Form implementation generated from reading ui file '/home/capi_x/kantenas/src/kantenasMain.ui'
**
** Created: sáb may 22 15:35:43 2004
**      by: The User Interface Compiler ($Id: kantenasMain.cpp,v 1.1 2004/05/22 14:47:33 capi_x Exp $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "kantenasMain.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <qwidget.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qframe.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qtoolbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qaction.h>
#include <qmenubar.h>
#include <qpopupmenu.h>
#include <qtoolbar.h>
#include <qimage.h>
#include <qpixmap.h>

#include "/home/capi_x/kantenas/src/kantenasMain.ui.h"
static const char* const img0_kantenasMain[] = { 
"22 22 7 1",
". c None",
"# c #000000",
"b c #2e2e2e",
"c c #5c5c5c",
"d c #878787",
"e c #c2c2c2",
"a c #ffffff",
"......................",
"....##########........",
"....#aaaaaaa#b#.......",
"....#aaaaaaa#cb#......",
"....#aaaaaaa#dcb#.....",
"....#aaaaaaa#edcb#....",
"....#aaaaaaa#aedcb#...",
"....#aaaaaaa#######...",
"....#aaaaaaaaaaaaa#...",
"....#aaaaaaaaaaaaa#...",
"....#aaaaaaaaaaaaa#...",
"....#aaaaaaaaaaaaa#...",
"....#aaaaaaaaaaaaa#...",
"....#aaaaaaaaaaaaa#...",
"....#aaaaaaaaaaaaa#...",
"....#aaaaaaaaaaaaa#...",
"....#aaaaaaaaaaaaa#...",
"....#aaaaaaaaaaaaa#...",
"....#aaaaaaaaaaaaa#...",
"....###############...",
"......................",
"......................"};

static const char* const img1_kantenasMain[] = { 
"22 22 5 1",
". c None",
"# c #000000",
"c c #848200",
"a c #ffff00",
"b c #ffffff",
"......................",
"......................",
"......................",
"............####....#.",
"...........#....##.##.",
"..................###.",
".................####.",
".####...........#####.",
"#abab##########.......",
"#babababababab#.......",
"#ababababababa#.......",
"#babababababab#.......",
"#ababab###############",
"#babab##cccccccccccc##",
"#abab##cccccccccccc##.",
"#bab##cccccccccccc##..",
"#ab##cccccccccccc##...",
"#b##cccccccccccc##....",
"###cccccccccccc##.....",
"##cccccccccccc##......",
"###############.......",
"......................"};

static const char* const img2_kantenasMain[] = { 
"22 22 5 1",
". c None",
"# c #000000",
"a c #848200",
"b c #c1c1c1",
"c c #cab5d1",
"......................",
".####################.",
".#aa#bbbbbbbbbbbb#bb#.",
".#aa#bbbbbbbbbbbb#bb#.",
".#aa#bbbbbbbbbcbb####.",
".#aa#bbbccbbbbbbb#aa#.",
".#aa#bbbccbbbbbbb#aa#.",
".#aa#bbbbbbbbbbbb#aa#.",
".#aa#bbbbbbbbbbbb#aa#.",
".#aa#bbbbbbbbbbbb#aa#.",
".#aa#bbbbbbbbbbbb#aa#.",
".#aaa############aaa#.",
".#aaaaaaaaaaaaaaaaaa#.",
".#aaaaaaaaaaaaaaaaaa#.",
".#aaa#############aa#.",
".#aaa#########bbb#aa#.",
".#aaa#########bbb#aa#.",
".#aaa#########bbb#aa#.",
".#aaa#########bbb#aa#.",
".#aaa#########bbb#aa#.",
"..##################..",
"......................"};

static const char* const img3_kantenasMain[] = { 
"22 22 88 2",
"Qt c None",
".2 c #000000",
".S c #08ff08",
"#v c #100810",
".U c #101010",
"#c c #101018",
".M c #181018",
"#e c #181818",
".A c #181821",
".L c #211821",
"#l c #212121",
".z c #212129",
"#m c #292129",
"#u c #292929",
"#n c #292931",
".R c #29ff29",
"#o c #312931",
".T c #313131",
"#p c #313139",
".Z c #31ff31",
"#q c #393139",
"#t c #393939",
".y c #393942",
"#s c #423942",
".o c #424242",
"#h c #4a4a52",
".n c #5a525a",
"#r c #5a5a63",
".I c #5ace5a",
"#b c #6b636b",
".p c #6b6b6b",
".x c #6b6b73",
".Y c #6bff63",
".l c #736b73",
".t c #7b737b",
".s c #7b7384",
".0 c #7bff7b",
".r c #847b84",
".u c #847b8c",
"#g c #84848c",
".v c #8c7b94",
"#i c #8c848c",
".w c #8c8494",
"#j c #8c8c8c",
".8 c #8c8c94",
".m c #948c94",
"#k c #948c9c",
"#f c #949494",
".q c #94949c",
".J c #94c694",
"#d c #9c949c",
"#a c #9c94a5",
".k c #9c9c9c",
".N c #9c9ca5",
".H c #9ccea5",
".K c #a59ca5",
"#. c #a59cad",
".i c #a5a5a5",
".3 c #a5a5ad",
"## c #ad9cad",
".V c #ada5ad",
".d c #adadad",
".j c #adadb5",
".9 c #b5adb5",
".# c #b5b5b5",
".a c #bdbdbd",
".7 c #bdd6bd",
".c c #c6c6c6",
".5 c #cec6ce",
".b c #cecece",
".4 c #ceced6",
".F c #d6ced6",
".G c #d6cede",
".h c #d6d6d6",
".E c #d6d6de",
".Q c #d6ffd6",
".B c #ded6de",
".1 c #ded6e7",
".g c #dedede",
".D c #dedee7",
".6 c #e7dee7",
".f c #e7e7e7",
".C c #e7e7ef",
".X c #e7ffe7",
".O c #efe7ef",
".e c #efefef",
".W c #f7f7f7",
".P c #ffffff",
"QtQtQtQtQtQt.#.a.b.b.b.b.c.c.a.a.d.aQtQtQtQt",
"QtQtQtQtQtQt.a.e.f.f.f.f.f.e.e.e.g.aQtQtQtQt",
"QtQtQtQtQtQt.a.c.c.c.b.b.c.c.c.c.a.cQtQtQtQt",
"QtQtQtQtQtQt.#.a.a.a.a.#.a.a.#.#.d.aQtQtQtQt",
"QtQtQtQtQt.c.d.c.a.c.c.c.a.a.a.c.#QtQtQtQtQt",
"QtQtQtQtQt.a.a.#.a.a.a.a.a.a.c.c.#QtQtQtQtQt",
"QtQtQtQtQt.a.#.c.a.a.a.a.a.c.a.c.dQtQtQtQtQt",
"QtQtQtQtQt.c.a.a.a.a.a.a.a.a.a.a.#QtQtQtQtQt",
"QtQtQtQtQt.d.b.f.g.g.g.g.g.g.h.g.i.i.jQtQtQt",
"QtQtQt.a.k.l.#.h.b.h.b.h.b.h.g.g.m.n.o.p.#Qt",
"QtQt.a.q.r.s.t.t.t.t.t.t.t.u.v.w.x.y.z.A.o.i",
"Qt.a.k.B.C.D.B.E.E.E.E.F.G.H.I.J.K.o.L.L.M.y",
".a.N.O.P.P.P.P.P.P.P.P.P.Q.R.S.R.b.v.T.A.U.L",
".V.W.P.P.P.P.P.P.P.P.P.P.X.Y.Z.0.P.1.t.A.2.L",
".3.E.4.5.4.h.E.E.g.6.D.B.D.E.7.F.4.5.8.M.2.A",
".m.9.j.V.3#..3.K#.#..i#..K#.###a.q.8#b#c.2.L",
".m.j.j#..3.K.K.K.N.K.N.N.N.N#a#d#d.w#b#c.2#e",
"#f#.#..K.N.K.N.N.N#a.k#a#d#d#d#a.m#g#b.M.2#h",
".m.3.K.K#a.k#a#d#a.k#a#d#a#d.q.m.8#i.x#c#e.d",
"#f#g#i.w#j.w#i.8.w#i.8.8.m.8.m#k.8.w#b#e#fQt",
".#.l.z.A#l.z#m#m#m#n#o#o#p#p#q#q#p#o#p#fQtQt",
"QtQt.d#r#s#s#t#p.T.T.T#u#u.z#e#e#v.o.kQtQtQt"};

static const char* const img4_kantenasMain[] = { 
"22 22 3 1",
". c None",
"# c #000084",
"a c #848284",
"......................",
"......................",
"......................",
"......................",
"......................",
"...........######a....",
"..#......##########...",
"..##...####......##a..",
"..###.###.........##..",
"..######..........##..",
"..#####...........##..",
"..######..........##..",
"..#######.........##..",
"..########.......##a..",
"...............a###...",
"...............###....",
"......................",
"......................",
"......................",
"......................",
"......................",
"......................"};

static const char* const img5_kantenasMain[] = { 
"22 22 3 1",
". c None",
"a c #000084",
"# c #848284",
"......................",
"......................",
"......................",
"......................",
"......................",
"....#aaaaaa...........",
"...aaaaaaaaaa......a..",
"..#aa......aaaa...aa..",
"..aa.........aaa.aaa..",
"..aa..........aaaaaa..",
"..aa...........aaaaa..",
"..aa..........aaaaaa..",
"..aa.........aaaaaaa..",
"..#aa.......aaaaaaaa..",
"...aaa#...............",
"....aaa...............",
"......................",
"......................",
"......................",
"......................",
"......................",
"......................"};

static const char* const img6_kantenasMain[] = { 
"22 22 3 1",
". c None",
"# c #000000",
"a c #000082",
"......................",
".......#.....#........",
".......#.....#........",
".......#.....#........",
".......#....##........",
".......##...#.........",
"........#...#.........",
"........##.##.........",
".........###..........",
".........###..........",
"..........#...........",
".........a#a..........",
"........aa.aaa........",
".......a.a.a..a.......",
"......a..a.a...a......",
".....a...a.a....a.....",
"....a....a.a....a.....",
"....a....a..a...a.....",
"....a....a..a..a......",
"....a...a....aa.......",
".....aaa..............",
"......................"};

static const char* const img7_kantenasMain[] = { 
"22 22 6 1",
". c None",
"# c #000000",
"b c #000082",
"c c #3c3cfd",
"d c #8b8bfd",
"a c #ffffff",
"......................",
"......................",
"########..............",
"#aaaaaa##.............",
"#a####a#a#............",
"#aaaaaa#aa#...........",
"#a####a#bbbbbbbb......",
"#aaaaaa#baaaaaabb.....",
"#a#####aba####abcb....",
"#aaaaaaabaaaaaabdcb...",
"#a#####aba####abadcb..",
"#aaaaaaabaaaaaabbbbbb.",
"#a#####aba####aaaaaab.",
"#aaaaaaabaaaaaaaaaaab.",
"#a#####aba#########ab.",
"#aaaaaaabaaaaaaaaaaab.",
"########ba#########ab.",
"........baaaaaaaaaaab.",
"........ba#########ab.",
"........baaaaaaaaaaab.",
"........bbbbbbbbbbbbb.",
"......................"};

static const char* const img8_kantenasMain[] = { 
"22 22 8 1",
". c None",
"# c #000000",
"e c #000084",
"c c #848200",
"b c #848284",
"d c #c6c3c6",
"a c #ffff00",
"f c #ffffff",
"......................",
".......#####..........",
"..######aaa######.....",
".######aaaaa######....",
"##bcb##a###a##bcb##...",
"#bcb#ddddddddd#bcb#...",
"#cbc#ddddddddd#cbc#...",
"#bcb###########bcb#...",
"#cbcbcbcbcbcbcbcbc#...",
"#bcbcbcbcbcbcbcbcb#...",
"#cbcbcbceeeeeeeeee#...",
"#bcbcbcbefffffffefe...",
"#cbcbcbcefeeeeefeffe..",
"#bcbcbcbefffffffefffe.",
"#cbcbcbcefeeeeefeffffe",
"#bcbcbcbefffffffeeeeee",
"#cbcbcbcefeeeeeffffffe",
"#bcbcbcbeffffffffffffe",
"#cbcbcbcefeeeeeeeeeefe",
".#######effffffffffffe",
"........eeeeeeeeeeeeee",
"......................"};

static const char* const img9_kantenasMain[] = { 
"22 22 106 2",
"Qt c None",
"#N c #212121",
"#J c #292929",
"#K c #393939",
"#M c #424242",
".m c #5a5a5a",
"#r c #5a736b",
"#A c #5a9c84",
"#B c #636363",
".N c #636b6b",
"#G c #63736b",
"#v c #63ad8c",
"#H c #6b6b6b",
".c c #6b7373",
"#D c #6b7b73",
".l c #6b7b7b",
".W c #6b847b",
".t c #6b8c7b",
"#x c #6b9484",
"#w c #6bad94",
".u c #737373",
".v c #737b73",
".g c #737b7b",
".D c #738c84",
".7 c #739484",
"#d c #73948c",
"#z c #73a59c",
"#p c #73b594",
"#o c #73bd9c",
".b c #7b7b7b",
".O c #7b8484",
"#a c #7bad94",
"#q c #7bad9c",
"#i c #7bb59c",
".5 c #7bbd9c",
"#b c #7bbda5",
"#h c #7bc69c",
"#y c #7bc6a5",
".8 c #848484",
".4 c #8484b5",
".h c #849c94",
"#n c #84a5ad",
".V c #84ada5",
"#E c #84b59c",
"#F c #84b5a5",
"#j c #84bda5",
"#t c #84c6a5",
"#l c #84cead",
".E c #8c8c8c",
"#g c #8c8cbd",
"## c #8c94b5",
"#m c #8cadbd",
"#c c #8cb5a5",
".L c #8cc6ad",
".T c #8ccead",
"#f c #8cceb5",
".a c #949494",
".n c #94a59c",
"#u c #94a5ce",
".k c #94bdad",
".M c #94c6ad",
".6 c #94c6b5",
".B c #94ceb5",
".1 c #94d6b5",
".C c #94d6bd",
".9 c #94debd",
".K c #9c94d6",
".d c #9c9c9c",
".w c #9cbdb5",
"#. c #9cbdd6",
"#s c #9ccebd",
".2 c #9ccece",
".0 c #9cdebd",
".S c #9ce7bd",
".Z c #9ce7c6",
".U c #a594de",
"#L c #a5a5a5",
".A c #a5b5de",
".3 c #a5b5ef",
".I c #a5cece",
"#k c #a5dec6",
".s c #a5e7c6",
".f c #adadad",
".J c #adadef",
".R c #adb5de",
".i c #adcec6",
".P c #add6c6",
".j c #addece",
"#e c #ade7ce",
".# c #b5b5b5",
".H c #b5bdde",
".Q c #b5dede",
".r c #b5efd6",
".e c #bdbdbd",
".z c #bdc6f7",
".y c #bdd6ff",
".X c #bde7d6",
".q c #bdefde",
".Y c #bdf7de",
"#I c #c6c6c6",
".x c #c6def7",
".p c #c6f7e7",
"#C c #ced6ce",
".G c #cedeff",
".o c #ceffef",
".F c #d6fff7",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQt.#.a.b.c.c.b.d.eQtQtQtQtQtQtQtQtQtQtQt",
"QtQt.f.g.h.i.j.j.k.l.b.#QtQtQtQtQtQtQtQtQtQt",
"Qt.f.m.n.o.o.p.q.r.s.t.u.eQtQtQtQtQtQtQtQtQt",
".e.v.w.q.p.x.y.z.A.B.C.D.EQtQtQtQtQtQtQtQtQt",
".d.h.F.q.G.H.I.I.J.K.L.M.N.#QtQtQtQtQtQtQtQt",
".O.P.o.Q.R.B.S.T.A.U.V.B.W.dQtQtQtQtQtQtQtQt",
".g.X.Y.Z.Z.0.1.2.3.4.5.6.7.8QtQtQtQtQtQtQtQt",
".g.j.r.0.9.1#..3###a#b#c#d.8QtQtQtQtQtQtQtQt",
".v.P#e.1.1#f.A#g.5#h#i#j.W.EQtQtQtQtQtQtQtQt",
".E#c#k#f.L#l#m#n#o#p#p#q#r.fQtQtQtQtQtQtQtQt",
".f.g#s#t#t#b#u.4#v#w#w#x.u.eQtQtQtQtQtQtQtQt",
"Qt.E.t#y#b.5#z#d#p#A#A#B.d#C.f.eQtQtQtQtQtQt",
"Qt.e.b#D#E#F#j#i#a.7.m.dQt.f#B.m.fQtQtQtQtQt",
"QtQt.e.E.N#D.W.W#G#H.fQtQt#I.b#J#K.E.eQtQtQt",
"QtQtQtQt.#.d.E.a#L#IQtQtQtQtQt#L#M#J#H.fQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.e.u#N#K.aQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.d#K#N#H",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.##B.m",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt"};


/*
 *  Constructs a kantenasMain as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 */
kantenasMain::kantenasMain( QWidget* parent, const char* name, WFlags fl )
    : QMainWindow( parent, name, fl ),
      image0( (const char **) img0_kantenasMain ),
      image1( (const char **) img1_kantenasMain ),
      image2( (const char **) img2_kantenasMain ),
      image3( (const char **) img3_kantenasMain ),
      image4( (const char **) img4_kantenasMain ),
      image5( (const char **) img5_kantenasMain ),
      image6( (const char **) img6_kantenasMain ),
      image7( (const char **) img7_kantenasMain ),
      image8( (const char **) img8_kantenasMain ),
      image9( (const char **) img9_kantenasMain )
{
    (void)statusBar();
    if ( !name )
	setName( "kantenasMain" );
    setCentralWidget( new QWidget( this, "qt_central_widget" ) );

    tabWidget3 = new QTabWidget( centralWidget(), "tabWidget3" );
    tabWidget3->setGeometry( QRect( 10, 10, 630, 380 ) );
    tabWidget3->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)1, 0, 0, tabWidget3->sizePolicy().hasHeightForWidth() ) );

    tab = new QWidget( tabWidget3, "tab" );

    groupBox3 = new QGroupBox( tab, "groupBox3" );
    groupBox3->setGeometry( QRect( 10, 180, 396, 67 ) );

    textLabel10 = new QLabel( groupBox3, "textLabel10" );
    textLabel10->setGeometry( QRect( 10, 20, 67, 20 ) );

    textLabel11 = new QLabel( groupBox3, "textLabel11" );
    textLabel11->setGeometry( QRect( 10, 40, 67, 20 ) );

    line9 = new QFrame( groupBox3, "line9" );
    line9->setGeometry( QRect( 80, 20, 131, 20 ) );
    line9->setFrameShape( QFrame::HLine );
    line9->setFrameShadow( QFrame::Sunken );
    line9->setFrameShape( QFrame::HLine );

    line10 = new QFrame( groupBox3, "line10" );
    line10->setGeometry( QRect( 80, 40, 131, 20 ) );
    line10->setFrameShape( QFrame::HLine );
    line10->setFrameShadow( QFrame::Sunken );
    line10->setFrameShape( QFrame::HLine );

    textLabel19 = new QLabel( groupBox3, "textLabel19" );
    textLabel19->setGeometry( QRect( 220, 40, 166, 20 ) );

    textLabel18 = new QLabel( groupBox3, "textLabel18" );
    textLabel18->setGeometry( QRect( 220, 20, 166, 20 ) );

    groupBox4 = new QGroupBox( tab, "groupBox4" );
    groupBox4->setGeometry( QRect( 10, 250, 396, 88 ) );

    textLabel14 = new QLabel( groupBox4, "textLabel14" );
    textLabel14->setGeometry( QRect( 10, 60, 98, 20 ) );

    textLabel13 = new QLabel( groupBox4, "textLabel13" );
    textLabel13->setGeometry( QRect( 10, 40, 30, 20 ) );

    textLabel12 = new QLabel( groupBox4, "textLabel12" );
    textLabel12->setGeometry( QRect( 10, 20, 92, 20 ) );

    line12 = new QFrame( groupBox4, "line12" );
    line12->setGeometry( QRect( 40, 40, 171, 20 ) );
    line12->setFrameShape( QFrame::HLine );
    line12->setFrameShadow( QFrame::Sunken );
    line12->setFrameShape( QFrame::HLine );

    line13 = new QFrame( groupBox4, "line13" );
    line13->setGeometry( QRect( 111, 60, 100, 20 ) );
    line13->setFrameShape( QFrame::HLine );
    line13->setFrameShadow( QFrame::Sunken );
    line13->setFrameShape( QFrame::HLine );

    textLabel20 = new QLabel( groupBox4, "textLabel20" );
    textLabel20->setGeometry( QRect( 220, 20, 92, 20 ) );

    textLabel21 = new QLabel( groupBox4, "textLabel21" );
    textLabel21->setGeometry( QRect( 220, 40, 92, 20 ) );

    textLabel22 = new QLabel( groupBox4, "textLabel22" );
    textLabel22->setGeometry( QRect( 220, 60, 99, 20 ) );

    line11 = new QFrame( groupBox4, "line11" );
    line11->setGeometry( QRect( 110, 20, 101, 20 ) );
    line11->setFrameShape( QFrame::HLine );
    line11->setFrameShadow( QFrame::Sunken );
    line11->setFrameShape( QFrame::HLine );

    groupBox2 = new QGroupBox( tab, "groupBox2" );
    groupBox2->setGeometry( QRect( 10, 90, 396, 88 ) );

    textLabel7 = new QLabel( groupBox2, "textLabel7" );
    textLabel7->setGeometry( QRect( 10, 20, 60, 20 ) );

    textLabel8 = new QLabel( groupBox2, "textLabel8" );
    textLabel8->setGeometry( QRect( 10, 40, 60, 20 ) );

    textLabel9 = new QLabel( groupBox2, "textLabel9" );
    textLabel9->setGeometry( QRect( 10, 60, 60, 20 ) );

    line8 = new QFrame( groupBox2, "line8" );
    line8->setGeometry( QRect( 80, 60, 131, 20 ) );
    line8->setFrameShape( QFrame::HLine );
    line8->setFrameShadow( QFrame::Sunken );
    line8->setFrameShape( QFrame::HLine );

    line7 = new QFrame( groupBox2, "line7" );
    line7->setGeometry( QRect( 80, 40, 131, 20 ) );
    line7->setFrameShape( QFrame::HLine );
    line7->setFrameShadow( QFrame::Sunken );
    line7->setFrameShape( QFrame::HLine );

    line6 = new QFrame( groupBox2, "line6" );
    line6->setGeometry( QRect( 80, 20, 131, 20 ) );
    line6->setFrameShape( QFrame::HLine );
    line6->setFrameShadow( QFrame::Sunken );
    line6->setFrameShape( QFrame::HLine );

    textLabel16 = new QLabel( groupBox2, "textLabel16" );
    textLabel16->setGeometry( QRect( 220, 40, 78, 20 ) );

    textLabel17 = new QLabel( groupBox2, "textLabel17" );
    textLabel17->setGeometry( QRect( 220, 60, 159, 20 ) );

    textLabel15 = new QLabel( groupBox2, "textLabel15" );
    textLabel15->setGeometry( QRect( 220, 20, 138, 20 ) );

    groupBox1 = new QGroupBox( tab, "groupBox1" );
    groupBox1->setGeometry( QRect( 10, 10, 396, 80 ) );

    textLabel4 = new QLabel( groupBox1, "textLabel4" );
    textLabel4->setGeometry( QRect( 220, 10, 100, 20 ) );

    textLabel5 = new QLabel( groupBox1, "textLabel5" );
    textLabel5->setGeometry( QRect( 220, 30, 100, 20 ) );

    textLabel6 = new QLabel( groupBox1, "textLabel6" );
    textLabel6->setGeometry( QRect( 220, 50, 100, 20 ) );

    line5 = new QFrame( groupBox1, "line5" );
    line5->setGeometry( QRect( 100, 50, 111, 20 ) );
    line5->setFrameShape( QFrame::HLine );
    line5->setFrameShadow( QFrame::Sunken );
    line5->setFrameShape( QFrame::HLine );

    line4 = new QFrame( groupBox1, "line4" );
    line4->setGeometry( QRect( 101, 30, 110, 20 ) );
    line4->setFrameShape( QFrame::HLine );
    line4->setFrameShadow( QFrame::Sunken );
    line4->setFrameShape( QFrame::HLine );

    line3 = new QFrame( groupBox1, "line3" );
    line3->setGeometry( QRect( 100, 10, 110, 20 ) );
    line3->setFrameShape( QFrame::HLine );
    line3->setFrameShadow( QFrame::Sunken );
    line3->setFrameShape( QFrame::HLine );

    textLabel1 = new QLabel( groupBox1, "textLabel1" );
    textLabel1->setGeometry( QRect( 10, 10, 85, 20 ) );

    textLabel2 = new QLabel( groupBox1, "textLabel2" );
    textLabel2->setGeometry( QRect( 10, 30, 83, 20 ) );

    textLabel3 = new QLabel( groupBox1, "textLabel3" );
    textLabel3->setGeometry( QRect( 10, 50, 86, 20 ) );

    QWidget* privateLayoutWidget = new QWidget( tab, "layout58" );
    privateLayoutWidget->setGeometry( QRect( 420, 10, 193, 317 ) );
    layout58 = new QVBoxLayout( privateLayoutWidget, 11, 6, "layout58"); 

    layout30 = new QVBoxLayout( 0, 0, 6, "layout30"); 

    textLabel23 = new QLabel( privateLayoutWidget, "textLabel23" );
    layout30->addWidget( textLabel23 );

    layout7 = new QHBoxLayout( 0, 0, 6, "layout7"); 

    lineEditFrec = new QLineEdit( privateLayoutWidget, "lineEditFrec" );
    layout7->addWidget( lineEditFrec );

    comboBox1 = new QComboBox( FALSE, privateLayoutWidget, "comboBox1" );
    layout7->addWidget( comboBox1 );
    layout30->addLayout( layout7 );

    BtnCalcFrec = new QPushButton( privateLayoutWidget, "BtnCalcFrec" );
    layout30->addWidget( BtnCalcFrec );
    layout58->addLayout( layout30 );
    QSpacerItem* spacer = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout58->addItem( spacer );

    layout31 = new QVBoxLayout( 0, 0, 6, "layout31"); 

    textLabel24 = new QLabel( privateLayoutWidget, "textLabel24" );
    layout31->addWidget( textLabel24 );

    layout8 = new QHBoxLayout( 0, 0, 6, "layout8"); 

    lineEditLong = new QLineEdit( privateLayoutWidget, "lineEditLong" );
    layout8->addWidget( lineEditLong );

    comboBox2 = new QComboBox( FALSE, privateLayoutWidget, "comboBox2" );
    layout8->addWidget( comboBox2 );
    layout31->addLayout( layout8 );

    BtnCalcLong = new QPushButton( privateLayoutWidget, "BtnCalcLong" );
    layout31->addWidget( BtnCalcLong );
    layout58->addLayout( layout31 );
    QSpacerItem* spacer_2 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout58->addItem( spacer_2 );

    layout32 = new QVBoxLayout( 0, 0, 6, "layout32"); 

    textLabel1_2 = new QLabel( privateLayoutWidget, "textLabel1_2" );
    layout32->addWidget( textLabel1_2 );

    layout9 = new QHBoxLayout( 0, 0, 6, "layout9"); 

    lineEditPeri = new QLineEdit( privateLayoutWidget, "lineEditPeri" );
    layout9->addWidget( lineEditPeri );

    comboBoxPeri = new QComboBox( FALSE, privateLayoutWidget, "comboBoxPeri" );
    layout9->addWidget( comboBoxPeri );
    layout32->addLayout( layout9 );

    BtnCalPeri = new QPushButton( privateLayoutWidget, "BtnCalPeri" );
    layout32->addWidget( BtnCalPeri );
    layout58->addLayout( layout32 );
    tabWidget3->insertTab( tab, QString("") );

    TabPage = new QWidget( tabWidget3, "TabPage" );

    frame3 = new QFrame( TabPage, "frame3" );
    frame3->setGeometry( QRect( 10, 10, 600, 81 ) );
    frame3->setFrameShape( QFrame::StyledPanel );
    frame3->setFrameShadow( QFrame::Raised );

    QWidget* privateLayoutWidget_2 = new QWidget( frame3, "layout50" );
    privateLayoutWidget_2->setGeometry( QRect( 20, 10, 340, 60 ) );
    layout50 = new QVBoxLayout( privateLayoutWidget_2, 11, 6, "layout50"); 

    textLabel2_3 = new QLabel( privateLayoutWidget_2, "textLabel2_3" );
    layout50->addWidget( textLabel2_3 );

    layout49 = new QHBoxLayout( 0, 0, 6, "layout49"); 

    linEdLngO2 = new QLineEdit( privateLayoutWidget_2, "linEdLngO2" );
    layout49->addWidget( linEdLngO2 );

    cBoxLngO2 = new QComboBox( FALSE, privateLayoutWidget_2, "cBoxLngO2" );
    layout49->addWidget( cBoxLngO2 );

    btnCalcLngO2 = new QPushButton( privateLayoutWidget_2, "btnCalcLngO2" );
    layout49->addWidget( btnCalcLngO2 );
    layout50->addLayout( layout49 );

    groupBox8 = new QGroupBox( TabPage, "groupBox8" );
    groupBox8->setGeometry( QRect( 10, 101, 600, 230 ) );

    line12_2 = new QFrame( groupBox8, "line12_2" );
    line12_2->setGeometry( QRect( 20, 110, 270, 20 ) );
    line12_2->setFrameShape( QFrame::HLine );
    line12_2->setFrameShadow( QFrame::Sunken );
    line12_2->setLineWidth( 2 );
    line12_2->setFrameShape( QFrame::HLine );

    line13_2 = new QFrame( groupBox8, "line13_2" );
    line13_2->setGeometry( QRect( 310, 110, 270, 20 ) );
    line13_2->setFrameShape( QFrame::HLine );
    line13_2->setFrameShadow( QFrame::Sunken );
    line13_2->setLineWidth( 2 );
    line13_2->setFrameShape( QFrame::HLine );

    line16 = new QFrame( groupBox8, "line16" );
    line16->setGeometry( QRect( 20, 160, 560, 20 ) );
    line16->setFrameShape( QFrame::HLine );
    line16->setFrameShadow( QFrame::Sunken );
    line16->setFrameShape( QFrame::HLine );

    line19 = new QFrame( groupBox8, "line19" );
    line19->setGeometry( QRect( 20, 60, 270, 20 ) );
    line19->setFrameShape( QFrame::HLine );
    line19->setFrameShadow( QFrame::Sunken );
    line19->setFrameShape( QFrame::HLine );

    line18 = new QFrame( groupBox8, "line18" );
    line18->setGeometry( QRect( 280, 60, 20, 50 ) );
    line18->setFrameShape( QFrame::VLine );
    line18->setFrameShadow( QFrame::Sunken );
    line18->setFrameShape( QFrame::VLine );

    line17 = new QFrame( groupBox8, "line17" );
    line17->setGeometry( QRect( 10, 60, 20, 50 ) );
    line17->setFrameShape( QFrame::VLine );
    line17->setFrameShadow( QFrame::Sunken );
    line17->setFrameShape( QFrame::VLine );

    line23 = new QFrame( groupBox8, "line23" );
    line23->setGeometry( QRect( 310, 60, 270, 20 ) );
    line23->setFrameShape( QFrame::HLine );
    line23->setFrameShadow( QFrame::Sunken );
    line23->setFrameShape( QFrame::HLine );

    line21 = new QFrame( groupBox8, "line21" );
    line21->setGeometry( QRect( 570, 60, 20, 51 ) );
    line21->setFrameShape( QFrame::VLine );
    line21->setFrameShadow( QFrame::Sunken );
    line21->setFrameShape( QFrame::VLine );

    line20 = new QFrame( groupBox8, "line20" );
    line20->setGeometry( QRect( 300, 60, 20, 51 ) );
    line20->setFrameShape( QFrame::VLine );
    line20->setFrameShadow( QFrame::Sunken );
    line20->setFrameShape( QFrame::VLine );

    line14 = new QFrame( groupBox8, "line14" );
    line14->setGeometry( QRect( 10, 130, 20, 51 ) );
    line14->setFrameShape( QFrame::VLine );
    line14->setFrameShadow( QFrame::Sunken );
    line14->setFrameShape( QFrame::VLine );

    line15 = new QFrame( groupBox8, "line15" );
    line15->setGeometry( QRect( 570, 130, 20, 51 ) );
    line15->setFrameShape( QFrame::VLine );
    line15->setFrameShadow( QFrame::Sunken );
    line15->setFrameShape( QFrame::VLine );

    txtLblongDip1 = new QLabel( groupBox8, "txtLblongDip1" );
    txtLblongDip1->setGeometry( QRect( 100, 60, 110, 20 ) );
    txtLblongDip1->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)7, 0, 0, txtLblongDip1->sizePolicy().hasHeightForWidth() ) );

    txtLblongDip2 = new QLabel( groupBox8, "txtLblongDip2" );
    txtLblongDip2->setGeometry( QRect( 390, 60, 110, 20 ) );
    txtLblongDip2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)1, 0, 0, txtLblongDip2->sizePolicy().hasHeightForWidth() ) );

    txtLblongDipTO = new QLabel( groupBox8, "txtLblongDipTO" );
    txtLblongDipTO->setGeometry( QRect( 250, 160, 110, 20 ) );
    txtLblongDipTO->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, txtLblongDipTO->sizePolicy().hasHeightForWidth() ) );
    tabWidget3->insertTab( TabPage, QString("") );

    tab_2 = new QWidget( tabWidget3, "tab_2" );

    toolBox2 = new QToolBox( tab_2, "toolBox2" );
    toolBox2->setGeometry( QRect( 0, 0, 630, 350 ) );
    toolBox2->setCurrentIndex( 2 );

    page1 = new QWidget( toolBox2, "page1" );
    page1->setBackgroundMode( QWidget::PaletteBackground );

    QWidget* privateLayoutWidget_3 = new QWidget( page1, "layout49_2" );
    privateLayoutWidget_3->setGeometry( QRect( 10, 0, 598, 265 ) );
    layout49_2 = new QHBoxLayout( privateLayoutWidget_3, 11, 6, "layout49_2"); 

    layout48 = new QVBoxLayout( 0, 0, 6, "layout48"); 
    QSpacerItem* spacer_3 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout48->addItem( spacer_3 );

    layout19 = new QVBoxLayout( 0, 0, 6, "layout19"); 

    textLabel1_3 = new QLabel( privateLayoutWidget_3, "textLabel1_3" );
    layout19->addWidget( textLabel1_3 );

    layout10 = new QHBoxLayout( 0, 0, 6, "layout10"); 

    linEdP1 = new QLineEdit( privateLayoutWidget_3, "linEdP1" );
    layout10->addWidget( linEdP1 );

    BtnCalcP1 = new QPushButton( privateLayoutWidget_3, "BtnCalcP1" );
    layout10->addWidget( BtnCalcP1 );
    layout19->addLayout( layout10 );
    layout48->addLayout( layout19 );
    QSpacerItem* spacer_4 = new QSpacerItem( 21, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout48->addItem( spacer_4 );

    layout20 = new QVBoxLayout( 0, 0, 6, "layout20"); 

    textLabel2_2 = new QLabel( privateLayoutWidget_3, "textLabel2_2" );
    layout20->addWidget( textLabel2_2 );

    layout11 = new QHBoxLayout( 0, 0, 6, "layout11"); 

    linEdP2 = new QLineEdit( privateLayoutWidget_3, "linEdP2" );
    layout11->addWidget( linEdP2 );

    BtnCalcP2 = new QPushButton( privateLayoutWidget_3, "BtnCalcP2" );
    layout11->addWidget( BtnCalcP2 );
    layout20->addLayout( layout11 );
    layout48->addLayout( layout20 );
    QSpacerItem* spacer_5 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout48->addItem( spacer_5 );

    layout21 = new QVBoxLayout( 0, 0, 6, "layout21"); 

    textLabel3_2 = new QLabel( privateLayoutWidget_3, "textLabel3_2" );
    layout21->addWidget( textLabel3_2 );

    layout12 = new QHBoxLayout( 0, 0, 6, "layout12"); 

    linEdGp = new QLineEdit( privateLayoutWidget_3, "linEdGp" );
    layout12->addWidget( linEdGp );

    BtnCalcGp = new QPushButton( privateLayoutWidget_3, "BtnCalcGp" );
    layout12->addWidget( BtnCalcGp );
    layout21->addLayout( layout12 );
    layout48->addLayout( layout21 );
    layout49_2->addLayout( layout48 );

    groupBox5 = new QGroupBox( privateLayoutWidget_3, "groupBox5" );

    textLabel5_2 = new QLabel( groupBox5, "textLabel5_2" );
    textLabel5_2->setGeometry( QRect( 10, 200, 341, 39 ) );

    textLabel4_2 = new QLabel( groupBox5, "textLabel4_2" );
    textLabel4_2->setGeometry( QRect( 10, 20, 361, 180 ) );
    textLabel4_2->setAlignment( int( QLabel::WordBreak | QLabel::AlignTop ) );
    layout49_2->addWidget( groupBox5 );
    toolBox2->addItem( page1, "Ganancia de Potencia" );

    page2 = new QWidget( toolBox2, "page2" );
    page2->setBackgroundMode( QWidget::PaletteBackground );

    QWidget* privateLayoutWidget_4 = new QWidget( page2, "layout51" );
    privateLayoutWidget_4->setGeometry( QRect( 10, 0, 600, 269 ) );
    layout51 = new QHBoxLayout( privateLayoutWidget_4, 11, 6, "layout51"); 

    layout50_2 = new QVBoxLayout( 0, 0, 6, "layout50_2"); 
    QSpacerItem* spacer_6 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout50_2->addItem( spacer_6 );

    layout22 = new QVBoxLayout( 0, 0, 6, "layout22"); 

    textLabel1_3_2 = new QLabel( privateLayoutWidget_4, "textLabel1_3_2" );
    layout22->addWidget( textLabel1_3_2 );

    layout13 = new QHBoxLayout( 0, 0, 6, "layout13"); 

    linEdU1 = new QLineEdit( privateLayoutWidget_4, "linEdU1" );
    layout13->addWidget( linEdU1 );

    BtnCalcU1 = new QPushButton( privateLayoutWidget_4, "BtnCalcU1" );
    layout13->addWidget( BtnCalcU1 );
    layout22->addLayout( layout13 );
    layout50_2->addLayout( layout22 );
    QSpacerItem* spacer_7 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout50_2->addItem( spacer_7 );

    layout24 = new QVBoxLayout( 0, 0, 6, "layout24"); 

    textLabel2_2_2 = new QLabel( privateLayoutWidget_4, "textLabel2_2_2" );
    layout24->addWidget( textLabel2_2_2 );

    layout14 = new QHBoxLayout( 0, 0, 6, "layout14"); 

    linEdU2 = new QLineEdit( privateLayoutWidget_4, "linEdU2" );
    layout14->addWidget( linEdU2 );

    BtnCalcU2 = new QPushButton( privateLayoutWidget_4, "BtnCalcU2" );
    layout14->addWidget( BtnCalcU2 );
    layout24->addLayout( layout14 );
    layout50_2->addLayout( layout24 );
    QSpacerItem* spacer_8 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout50_2->addItem( spacer_8 );

    layout25 = new QVBoxLayout( 0, 0, 6, "layout25"); 

    textLabel3_2_2 = new QLabel( privateLayoutWidget_4, "textLabel3_2_2" );
    layout25->addWidget( textLabel3_2_2 );

    layout15 = new QHBoxLayout( 0, 0, 6, "layout15"); 

    linEdGu = new QLineEdit( privateLayoutWidget_4, "linEdGu" );
    layout15->addWidget( linEdGu );

    BtnCalcGu = new QPushButton( privateLayoutWidget_4, "BtnCalcGu" );
    layout15->addWidget( BtnCalcGu );
    layout25->addLayout( layout15 );
    layout50_2->addLayout( layout25 );
    layout51->addLayout( layout50_2 );

    groupBox5_2 = new QGroupBox( privateLayoutWidget_4, "groupBox5_2" );

    textLabel5_2_2 = new QLabel( groupBox5_2, "textLabel5_2_2" );
    textLabel5_2_2->setGeometry( QRect( 10, 200, 341, 39 ) );

    textLabel4_2_2 = new QLabel( groupBox5_2, "textLabel4_2_2" );
    textLabel4_2_2->setGeometry( QRect( 10, 20, 361, 180 ) );
    textLabel4_2_2->setAlignment( int( QLabel::WordBreak | QLabel::AlignTop ) );
    layout51->addWidget( groupBox5_2 );
    toolBox2->addItem( page2, "Ganancia de Tension" );

    page = new QWidget( toolBox2, "page" );
    page->setBackgroundMode( QWidget::PaletteBackground );

    QWidget* privateLayoutWidget_5 = new QWidget( page, "layout53" );
    privateLayoutWidget_5->setGeometry( QRect( 10, 0, 598, 268 ) );
    layout53 = new QHBoxLayout( privateLayoutWidget_5, 11, 6, "layout53"); 

    layout52 = new QVBoxLayout( 0, 0, 6, "layout52"); 
    QSpacerItem* spacer_9 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout52->addItem( spacer_9 );

    layout26 = new QVBoxLayout( 0, 0, 6, "layout26"); 

    textLabel1_3_3 = new QLabel( privateLayoutWidget_5, "textLabel1_3_3" );
    layout26->addWidget( textLabel1_3_3 );

    layout16 = new QHBoxLayout( 0, 0, 6, "layout16"); 

    linEdI1 = new QLineEdit( privateLayoutWidget_5, "linEdI1" );
    layout16->addWidget( linEdI1 );

    BtnCalcI1 = new QPushButton( privateLayoutWidget_5, "BtnCalcI1" );
    layout16->addWidget( BtnCalcI1 );
    layout26->addLayout( layout16 );
    layout52->addLayout( layout26 );
    QSpacerItem* spacer_10 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout52->addItem( spacer_10 );

    layout27 = new QVBoxLayout( 0, 0, 6, "layout27"); 

    textLabel2_2_3 = new QLabel( privateLayoutWidget_5, "textLabel2_2_3" );
    layout27->addWidget( textLabel2_2_3 );

    layout17 = new QHBoxLayout( 0, 0, 6, "layout17"); 

    linEdI2 = new QLineEdit( privateLayoutWidget_5, "linEdI2" );
    layout17->addWidget( linEdI2 );

    BtnCalcI2 = new QPushButton( privateLayoutWidget_5, "BtnCalcI2" );
    layout17->addWidget( BtnCalcI2 );
    layout27->addLayout( layout17 );
    layout52->addLayout( layout27 );
    QSpacerItem* spacer_11 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout52->addItem( spacer_11 );

    layout28 = new QVBoxLayout( 0, 0, 6, "layout28"); 

    textLabel3_2_3 = new QLabel( privateLayoutWidget_5, "textLabel3_2_3" );
    layout28->addWidget( textLabel3_2_3 );

    layout18 = new QHBoxLayout( 0, 0, 6, "layout18"); 

    linEdGi = new QLineEdit( privateLayoutWidget_5, "linEdGi" );
    layout18->addWidget( linEdGi );

    BtnCalcGi = new QPushButton( privateLayoutWidget_5, "BtnCalcGi" );
    layout18->addWidget( BtnCalcGi );
    layout28->addLayout( layout18 );
    layout52->addLayout( layout28 );
    layout53->addLayout( layout52 );

    groupBox5_3 = new QGroupBox( privateLayoutWidget_5, "groupBox5_3" );

    textLabel4_2_3 = new QLabel( groupBox5_3, "textLabel4_2_3" );
    textLabel4_2_3->setGeometry( QRect( 10, 20, 361, 190 ) );
    textLabel4_2_3->setAlignment( int( QLabel::WordBreak | QLabel::AlignTop ) );

    textLabel5_2_3 = new QLabel( groupBox5_3, "textLabel5_2_3" );
    textLabel5_2_3->setGeometry( QRect( 10, 200, 341, 39 ) );
    layout53->addWidget( groupBox5_3 );
    toolBox2->addItem( page, "Ganancia de Intensidad" );
    tabWidget3->insertTab( tab_2, QString("") );

    TabPage_2 = new QWidget( tabWidget3, "TabPage_2" );

    groupBox9 = new QGroupBox( TabPage_2, "groupBox9" );
    groupBox9->setGeometry( QRect( 11, 11, 300, 328 ) );

    QWidget* privateLayoutWidget_6 = new QWidget( groupBox9, "layout54" );
    privateLayoutWidget_6->setGeometry( QRect( 10, 30, 280, 290 ) );
    layout54 = new QVBoxLayout( privateLayoutWidget_6, 11, 6, "layout54"); 

    layout34 = new QVBoxLayout( 0, 0, 6, "layout34"); 

    textLabel1_4 = new QLabel( privateLayoutWidget_6, "textLabel1_4" );
    layout34->addWidget( textLabel1_4 );

    layout2 = new QHBoxLayout( 0, 0, 6, "layout2"); 

    lEdAt = new QLineEdit( privateLayoutWidget_6, "lEdAt" );
    layout2->addWidget( lEdAt );

    BtnAt = new QPushButton( privateLayoutWidget_6, "BtnAt" );
    layout2->addWidget( BtnAt );
    layout34->addLayout( layout2 );
    layout54->addLayout( layout34 );
    QSpacerItem* spacer_12 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout54->addItem( spacer_12 );

    layout35 = new QVBoxLayout( 0, 0, 6, "layout35"); 

    textLabel2_4 = new QLabel( privateLayoutWidget_6, "textLabel2_4" );
    layout35->addWidget( textLabel2_4 );

    layout3 = new QHBoxLayout( 0, 0, 6, "layout3"); 

    lEdSa = new QLineEdit( privateLayoutWidget_6, "lEdSa" );
    layout3->addWidget( lEdSa );

    BtnSa = new QPushButton( privateLayoutWidget_6, "BtnSa" );
    layout3->addWidget( BtnSa );
    layout35->addLayout( layout3 );
    layout54->addLayout( layout35 );
    QSpacerItem* spacer_13 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout54->addItem( spacer_13 );

    layout36 = new QVBoxLayout( 0, 0, 6, "layout36"); 

    textLabel3_3 = new QLabel( privateLayoutWidget_6, "textLabel3_3" );
    layout36->addWidget( textLabel3_3 );

    layout4 = new QHBoxLayout( 0, 0, 6, "layout4"); 

    lEdGa = new QLineEdit( privateLayoutWidget_6, "lEdGa" );
    layout4->addWidget( lEdGa );

    BtnGa = new QPushButton( privateLayoutWidget_6, "BtnGa" );
    layout4->addWidget( BtnGa );
    layout36->addLayout( layout4 );
    layout54->addLayout( layout36 );
    QSpacerItem* spacer_14 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout54->addItem( spacer_14 );

    layout37 = new QVBoxLayout( 0, 0, 6, "layout37"); 

    textLabel4_3 = new QLabel( privateLayoutWidget_6, "textLabel4_3" );
    layout37->addWidget( textLabel4_3 );

    layout5 = new QHBoxLayout( 0, 0, 6, "layout5"); 

    lEdSt = new QLineEdit( privateLayoutWidget_6, "lEdSt" );
    layout5->addWidget( lEdSt );

    BtnSt = new QPushButton( privateLayoutWidget_6, "BtnSt" );
    layout5->addWidget( BtnSt );
    layout37->addLayout( layout5 );
    layout54->addLayout( layout37 );

    groupBox10 = new QGroupBox( TabPage_2, "groupBox10" );
    groupBox10->setGeometry( QRect( 317, 11, 302, 328 ) );

    QWidget* privateLayoutWidget_7 = new QWidget( groupBox10, "layout50_3" );
    privateLayoutWidget_7->setGeometry( QRect( 11, 19, 280, 300 ) );
    layout50_3 = new QVBoxLayout( privateLayoutWidget_7, 11, 6, "layout50_3"); 
    QSpacerItem* spacer_15 = new QSpacerItem( 20, 33, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout50_3->addItem( spacer_15 );

    layout34_2 = new QVBoxLayout( 0, 0, 6, "layout34_2"); 

    textLabel1_4_2 = new QLabel( privateLayoutWidget_7, "textLabel1_4_2" );
    layout34_2->addWidget( textLabel1_4_2 );

    layout2_2 = new QHBoxLayout( 0, 0, 6, "layout2_2"); 

    lEdAt_2 = new QLineEdit( privateLayoutWidget_7, "lEdAt_2" );
    layout2_2->addWidget( lEdAt_2 );

    BtnAt_2 = new QPushButton( privateLayoutWidget_7, "BtnAt_2" );
    layout2_2->addWidget( BtnAt_2 );
    layout34_2->addLayout( layout2_2 );
    layout50_3->addLayout( layout34_2 );
    QSpacerItem* spacer_16 = new QSpacerItem( 20, 33, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout50_3->addItem( spacer_16 );

    layout35_2 = new QVBoxLayout( 0, 0, 6, "layout35_2"); 

    textLabel2_4_2 = new QLabel( privateLayoutWidget_7, "textLabel2_4_2" );
    layout35_2->addWidget( textLabel2_4_2 );

    layout3_2 = new QHBoxLayout( 0, 0, 6, "layout3_2"); 

    lEdSa_2 = new QLineEdit( privateLayoutWidget_7, "lEdSa_2" );
    layout3_2->addWidget( lEdSa_2 );

    BtnSa_2 = new QPushButton( privateLayoutWidget_7, "BtnSa_2" );
    layout3_2->addWidget( BtnSa_2 );
    layout35_2->addLayout( layout3_2 );
    layout50_3->addLayout( layout35_2 );
    QSpacerItem* spacer_17 = new QSpacerItem( 20, 33, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout50_3->addItem( spacer_17 );

    layout36_2 = new QVBoxLayout( 0, 0, 6, "layout36_2"); 

    textLabel3_3_2 = new QLabel( privateLayoutWidget_7, "textLabel3_3_2" );
    layout36_2->addWidget( textLabel3_3_2 );

    layout4_2 = new QHBoxLayout( 0, 0, 6, "layout4_2"); 

    lEdSe_2 = new QLineEdit( privateLayoutWidget_7, "lEdSe_2" );
    layout4_2->addWidget( lEdSe_2 );

    BtnSe_2 = new QPushButton( privateLayoutWidget_7, "BtnSe_2" );
    layout4_2->addWidget( BtnSe_2 );
    layout36_2->addLayout( layout4_2 );
    layout50_3->addLayout( layout36_2 );
    QSpacerItem* spacer_18 = new QSpacerItem( 20, 33, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout50_3->addItem( spacer_18 );
    tabWidget3->insertTab( TabPage_2, QString("") );

    // actions
    fileNewAction = new QAction( this, "fileNewAction" );
    fileNewAction->setIconSet( QIconSet( image0 ) );
    fileOpenAction = new QAction( this, "fileOpenAction" );
    fileOpenAction->setIconSet( QIconSet( image1 ) );
    fileSaveAction = new QAction( this, "fileSaveAction" );
    fileSaveAction->setIconSet( QIconSet( image2 ) );
    fileSaveAsAction = new QAction( this, "fileSaveAsAction" );
    filePrintAction = new QAction( this, "filePrintAction" );
    filePrintAction->setIconSet( QIconSet( image3 ) );
    fileExitAction = new QAction( this, "fileExitAction" );
    editUndoAction = new QAction( this, "editUndoAction" );
    editUndoAction->setIconSet( QIconSet( image4 ) );
    editRedoAction = new QAction( this, "editRedoAction" );
    editRedoAction->setIconSet( QIconSet( image5 ) );
    editCutAction = new QAction( this, "editCutAction" );
    editCutAction->setIconSet( QIconSet( image6 ) );
    editCopyAction = new QAction( this, "editCopyAction" );
    editCopyAction->setIconSet( QIconSet( image7 ) );
    editPasteAction = new QAction( this, "editPasteAction" );
    editPasteAction->setIconSet( QIconSet( image8 ) );
    editFindAction = new QAction( this, "editFindAction" );
    editFindAction->setIconSet( QIconSet( image9 ) );
    helpContentsAction = new QAction( this, "helpContentsAction" );
    helpIndexAction = new QAction( this, "helpIndexAction" );
    helpAboutAction = new QAction( this, "helpAboutAction" );


    // toolbars


    // menubar
    menubar = new QMenuBar( this, "menubar" );

    menubar->setGeometry( QRect( 0, 0, 650, 22 ) );

    fileMenu = new QPopupMenu( this );
    fileNewAction->addTo( fileMenu );
    fileOpenAction->addTo( fileMenu );
    fileSaveAction->addTo( fileMenu );
    fileSaveAsAction->addTo( fileMenu );
    fileMenu->insertSeparator();
    filePrintAction->addTo( fileMenu );
    fileMenu->insertSeparator();
    fileExitAction->addTo( fileMenu );
    menubar->insertItem( QString(""), fileMenu, 2 );

    editMenu = new QPopupMenu( this );
    editUndoAction->addTo( editMenu );
    editRedoAction->addTo( editMenu );
    editMenu->insertSeparator();
    editCutAction->addTo( editMenu );
    editCopyAction->addTo( editMenu );
    editPasteAction->addTo( editMenu );
    editMenu->insertSeparator();
    editFindAction->addTo( editMenu );
    menubar->insertItem( QString(""), editMenu, 3 );

    helpMenu = new QPopupMenu( this );
    helpContentsAction->addTo( helpMenu );
    helpIndexAction->addTo( helpMenu );
    helpMenu->insertSeparator();
    helpAboutAction->addTo( helpMenu );
    menubar->insertItem( QString(""), helpMenu, 4 );

    languageChange();
    resize( QSize(650, 440).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( fileNewAction, SIGNAL( activated() ), this, SLOT( fileNew() ) );
    connect( fileOpenAction, SIGNAL( activated() ), this, SLOT( fileOpen() ) );
    connect( fileSaveAction, SIGNAL( activated() ), this, SLOT( fileSave() ) );
    connect( fileSaveAsAction, SIGNAL( activated() ), this, SLOT( fileSaveAs() ) );
    connect( filePrintAction, SIGNAL( activated() ), this, SLOT( filePrint() ) );
    connect( fileExitAction, SIGNAL( activated() ), this, SLOT( fileExit() ) );
    connect( editUndoAction, SIGNAL( activated() ), this, SLOT( editUndo() ) );
    connect( editRedoAction, SIGNAL( activated() ), this, SLOT( editRedo() ) );
    connect( editCutAction, SIGNAL( activated() ), this, SLOT( editCut() ) );
    connect( editCopyAction, SIGNAL( activated() ), this, SLOT( editCopy() ) );
    connect( editPasteAction, SIGNAL( activated() ), this, SLOT( editPaste() ) );
    connect( editFindAction, SIGNAL( activated() ), this, SLOT( editFind() ) );
    connect( helpIndexAction, SIGNAL( activated() ), this, SLOT( helpIndex() ) );
    connect( helpContentsAction, SIGNAL( activated() ), this, SLOT( helpContents() ) );
    connect( helpAboutAction, SIGNAL( activated() ), this, SLOT( helpAbout() ) );
    connect( lineEditFrec, SIGNAL( returnPressed() ), this, SLOT( SlotCalcFrec() ) );
    connect( lineEditLong, SIGNAL( returnPressed() ), this, SLOT( SlotCalcLong() ) );
    connect( lineEditPeri, SIGNAL( returnPressed() ), this, SLOT( SlotCalcPeri() ) );
    connect( BtnCalcFrec, SIGNAL( clicked() ), this, SLOT( SlotCalcFrec() ) );
    connect( BtnCalcLong, SIGNAL( clicked() ), this, SLOT( SlotCalcLong() ) );
    connect( BtnCalPeri, SIGNAL( clicked() ), this, SLOT( SlotCalcPeri() ) );
    connect( linEdLngO2, SIGNAL( returnPressed() ), this, SLOT( SlotCalcLongDip() ) );
    connect( btnCalcLngO2, SIGNAL( clicked() ), this, SLOT( SlotCalcLongDip() ) );
    connect( lEdAt, SIGNAL( returnPressed() ), this, SLOT( SlotCalcAt() ) );
    connect( lEdSa, SIGNAL( returnPressed() ), this, SLOT( SlotCalcSa() ) );
    connect( lEdGa, SIGNAL( returnPressed() ), this, SLOT( SlotCalcGa() ) );
    connect( lEdSt, SIGNAL( returnPressed() ), this, SLOT( SlotCalcSt() ) );
    connect( lEdAt_2, SIGNAL( returnPressed() ), this, SLOT( SlotCalcAt_2() ) );
    connect( lEdSa_2, SIGNAL( returnPressed() ), this, SLOT( SlotCalcSa_2() ) );
    connect( lEdSe_2, SIGNAL( returnPressed() ), this, SLOT( SlotCalcSe_2() ) );
    connect( BtnAt, SIGNAL( clicked() ), this, SLOT( SlotCalcAt() ) );
    connect( BtnSa, SIGNAL( clicked() ), this, SLOT( SlotCalcSa() ) );
    connect( BtnGa, SIGNAL( clicked() ), this, SLOT( SlotCalcGa() ) );
    connect( BtnSt, SIGNAL( clicked() ), this, SLOT( SlotCalcSt() ) );
    connect( BtnAt_2, SIGNAL( clicked() ), this, SLOT( SlotCalcAt_2() ) );
    connect( BtnSa_2, SIGNAL( clicked() ), this, SLOT( SlotCalcSa_2() ) );
    connect( BtnSe_2, SIGNAL( clicked() ), this, SLOT( SlotCalcSe_2() ) );
    connect( linEdP1, SIGNAL( returnPressed() ), this, SLOT( SlotCalcP1() ) );
    connect( linEdP2, SIGNAL( returnPressed() ), this, SLOT( SlotCalcP2() ) );
    connect( linEdGp, SIGNAL( returnPressed() ), this, SLOT( SlotCalcGp() ) );
    connect( BtnCalcP1, SIGNAL( clicked() ), this, SLOT( SlotCalcP1() ) );
    connect( BtnCalcP2, SIGNAL( clicked() ), this, SLOT( SlotCalcP2() ) );
    connect( BtnCalcGp, SIGNAL( clicked() ), this, SLOT( SlotCalcGp() ) );
    connect( linEdU1, SIGNAL( returnPressed() ), this, SLOT( SlotCalcU1() ) );
    connect( linEdU2, SIGNAL( returnPressed() ), this, SLOT( SlotCalcU2() ) );
    connect( linEdGu, SIGNAL( returnPressed() ), this, SLOT( SlotCalcGu() ) );
    connect( BtnCalcU1, SIGNAL( clicked() ), this, SLOT( SlotCalcU1() ) );
    connect( BtnCalcU2, SIGNAL( clicked() ), this, SLOT( SlotCalcU2() ) );
    connect( BtnCalcGu, SIGNAL( clicked() ), this, SLOT( SlotCalcGu() ) );
    connect( linEdI1, SIGNAL( returnPressed() ), this, SLOT( SlotCalcI1() ) );
    connect( linEdI2, SIGNAL( returnPressed() ), this, SLOT( SlotCalcI2() ) );
    connect( linEdGi, SIGNAL( returnPressed() ), this, SLOT( SlotCalcGi() ) );
    connect( BtnCalcI1, SIGNAL( clicked() ), this, SLOT( SlotCalcI1() ) );
    connect( BtnCalcI2, SIGNAL( clicked() ), this, SLOT( SlotCalcI2() ) );
    connect( BtnCalcGi, SIGNAL( clicked() ), this, SLOT( SlotCalcGi() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
kantenasMain::~kantenasMain()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void kantenasMain::languageChange()
{
    setCaption( tr2i18n( "KAntenas - A antennas calculator tool" ) );
    groupBox3->setTitle( tr2i18n( "UHF" ) );
    textLabel10->setText( tr2i18n( "BANDA IV" ) );
    textLabel11->setText( tr2i18n( "BANDA V" ) );
    textLabel19->setText( tr2i18n( "606 - 862 MHz (Canal 38-69)" ) );
    textLabel18->setText( tr2i18n( "470 - 606 MHz (Canal 21-37)" ) );
    groupBox4->setTitle( tr2i18n( "Ku" ) );
    textLabel14->setText( tr2i18n( "FSS SUPERIOR" ) );
    textLabel13->setText( tr2i18n( "DBS" ) );
    textLabel12->setText( tr2i18n( "FSS INFERIOR" ) );
    textLabel20->setText( tr2i18n( "10,7 - 11,7 GHz" ) );
    textLabel21->setText( tr2i18n( "11,7 - 12,5 GHz" ) );
    textLabel22->setText( tr2i18n( "12,5 - 12,75 GHz" ) );
    groupBox2->setTitle( tr2i18n( "VHF" ) );
    textLabel7->setText( tr2i18n( "BANDA I" ) );
    textLabel8->setText( tr2i18n( "BANDA II" ) );
    textLabel9->setText( tr2i18n( "BANDA III" ) );
    textLabel16->setText( tr2i18n( "87 - 110 MHz" ) );
    textLabel17->setText( tr2i18n( "174 - 230 MHz (Canal 5-12)" ) );
    textLabel15->setText( tr2i18n( "47 - 68 MHz (Canal 2-4)" ) );
    groupBox1->setTitle( QString::null );
    textLabel4->setText( tr2i18n( "0,15 - 0,285 MHz" ) );
    textLabel5->setText( tr2i18n( "0,52 - 1,605 MHz" ) );
    textLabel6->setText( tr2i18n( "2,3 - 26,100 MHz" ) );
    textLabel1->setText( tr2i18n( "ONDA LARGA" ) );
    textLabel2->setText( tr2i18n( "ONDA MEDIA" ) );
    textLabel3->setText( tr2i18n( "ONDA CORTA" ) );
    textLabel23->setText( tr2i18n( "Frecuencia" ) );
    QWhatsThis::add( textLabel23, tr2i18n( "<b>Frecuencia:</b> Es la cantidad de veces que se repite un ciclo de onda en un segundo." ) );
    QToolTip::add( lineEditFrec, tr2i18n( "Introduzca el valor de la Frecuencia para realizar los cálculos" ) );
    comboBox1->clear();
    comboBox1->insertItem( tr2i18n( "MHz" ) );
    comboBox1->insertItem( tr2i18n( "GHz" ) );
    comboBox1->setCurrentItem( 0 );
    QToolTip::add( comboBox1, tr2i18n( "Seleccione la unidad que usted desee" ) );
    BtnCalcFrec->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( BtnCalcFrec, tr2i18n( "Aprieta aquí para calcular el resto de las variables" ) );
    textLabel24->setText( tr2i18n( "Longitud de onda" ) );
    QWhatsThis::add( textLabel24, tr2i18n( "<b>Longitud de Onda:</b> Es la longitud que abarcaría la onda estirada." ) );
    QToolTip::add( lineEditLong, tr2i18n( "Introduzca el valor de la Longitud de onda para realizar los cálculos" ) );
    comboBox2->clear();
    comboBox2->insertItem( tr2i18n( "Km" ) );
    comboBox2->insertItem( tr2i18n( "m" ) );
    comboBox2->insertItem( tr2i18n( "cm" ) );
    QToolTip::add( comboBox2, tr2i18n( "Seleccione la unidad que usted desee" ) );
    BtnCalcLong->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( BtnCalcLong, tr2i18n( "Aprieta aquí para calcular el resto de las variables" ) );
    textLabel1_2->setText( tr2i18n( "Periodo" ) );
    QWhatsThis::add( textLabel1_2, tr2i18n( "<b>Periodo:</b> Es la inversa matemática de la frecuencia." ) );
    QToolTip::add( lineEditPeri, tr2i18n( "Introduzca el valor del Periodo para realizar los cálculos" ) );
    comboBoxPeri->clear();
    comboBoxPeri->insertItem( tr2i18n( "Sg" ) );
    QToolTip::add( comboBoxPeri, tr2i18n( "Seleccione la unidad que usted desee" ) );
    BtnCalPeri->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( BtnCalPeri, tr2i18n( "Aprieta aquí para calcular el resto de las variables" ) );
    tabWidget3->changeTab( tab, tr2i18n( "Cálculos de ondas" ) );
    textLabel2_3->setText( tr2i18n( "Longitud de onda" ) );
    QWhatsThis::add( textLabel2_3, tr2i18n( "<b>Longitud de Onda:</b> Es la longitud que abarcaría la onda estirada." ) );
    QToolTip::add( linEdLngO2, tr2i18n( "Introduzca un valor de Longitud de Onda" ) );
    cBoxLngO2->clear();
    cBoxLngO2->insertItem( tr2i18n( "Km" ) );
    cBoxLngO2->insertItem( tr2i18n( "m" ) );
    cBoxLngO2->insertItem( tr2i18n( "cm" ) );
    QToolTip::add( cBoxLngO2, tr2i18n( "Seleccione la unidad que usted desee" ) );
    btnCalcLngO2->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( btnCalcLngO2, tr2i18n( "Realiza el calculo del dipolo" ) );
    groupBox8->setTitle( tr2i18n( "Medidas del dipolo simple" ) );
    QWhatsThis::add( groupBox8, tr2i18n( "Esto es la representación de un dipolo simple y las medidas de cada una de sus partes." ) );
    txtLblongDip1->setText( tr2i18n( "<p align=\"center\">?</p>" ) );
    txtLblongDip2->setText( tr2i18n( "<p align=\"center\">?</p>" ) );
    txtLblongDipTO->setText( tr2i18n( "<p align=\"center\">?</p>" ) );
    tabWidget3->changeTab( TabPage, tr2i18n( "Dipolos" ) );
    textLabel1_3->setText( tr2i18n( "Potencia de Entrada (P<font size=\"-1\">1</font>)" ) );
    QToolTip::add( linEdP1, tr2i18n( "Introduzca el valor" ) );
    BtnCalcP1->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( BtnCalcP1, tr2i18n( "Aprieta para calcular la P1" ) );
    textLabel2_2->setText( tr2i18n( "Potencia de Salida (P<font size=\"-1\">2</font>)" ) );
    QToolTip::add( linEdP2, tr2i18n( "Introduzca el valor" ) );
    BtnCalcP2->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( BtnCalcP2, tr2i18n( "Aprieta para calcular la G2" ) );
    textLabel3_2->setText( tr2i18n( "Ganancia de Potencia (G<font size=\"-1\">p</font>)" ) );
    QToolTip::add( linEdGp, tr2i18n( "Introduzca el valor" ) );
    BtnCalcGp->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( BtnCalcGp, tr2i18n( "Aprieta para calcular la Gp" ) );
    groupBox5->setTitle( tr2i18n( "Información" ) );
    textLabel5_2->setText( tr2i18n( "La fórmula utilizada por el cálculo es la siguiente:<br>\n"
"G<font size=\"-1\">p</font>=10 lg(P<font size=\"-1\">1</font>/P<font size=\"-1\">2</font>)" ) );
    textLabel4_2->setText( tr2i18n( "Es obligatorio introducir dos de las tres variables, sinó el cálculo será incorrecto.<br><br>\n"
"Para conocer el resultado tendrá que pulsar el botón <i>\"Calcular\"</i> adyacente al campo que se desee conocer o pulsar la tecla <i>\"Intro\"</i> en el campo a calcular.<br><br>\n"
"Recuerde que debe operar con las mismas unidades. Si el resultado de la ganancia viene dado en dBm la P2 será de 1mW." ) );
    textLabel1_3_2->setText( tr2i18n( "Tensión de Entrada (U<font size=\"-1\">1</font>)" ) );
    QToolTip::add( linEdU1, tr2i18n( "Introduzca el valor" ) );
    BtnCalcU1->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( BtnCalcU1, tr2i18n( "Aprieta para calcular la U1" ) );
    textLabel2_2_2->setText( tr2i18n( "Tensión de Salida (U<font size=\"-1\">2</font>)" ) );
    QToolTip::add( linEdU2, tr2i18n( "Introduzca el valor" ) );
    BtnCalcU2->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( BtnCalcU2, tr2i18n( "Aprieta para calcular la U2" ) );
    textLabel3_2_2->setText( tr2i18n( "Ganancia de Tensión (G<font size=\"-1\">U</font>)" ) );
    QToolTip::add( linEdGu, tr2i18n( "Introduzca el valor" ) );
    BtnCalcGu->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( BtnCalcGu, tr2i18n( "Aprieta para calcular la Gu" ) );
    groupBox5_2->setTitle( tr2i18n( "Información" ) );
    textLabel5_2_2->setText( tr2i18n( "La fórmula utilizada por el cálculo es la siguiente:<br>\n"
"G<font size=\"-1\">U</font>=20 lg(U<font size=\"-1\">1</font>/U<font size=\"-1\">2</font>)" ) );
    textLabel4_2_2->setText( tr2i18n( "Es obligatorio introducir dos de las tres variables, sinó el cálculo será incorrecto.<br><br>\n"
"Para conocer el resultado tendrá que pulsar el botón <i>\"Calcular\"</i> adyacente al campo que se desee conocer o pulsar la tecla <i>\"Intro\"</i> en el campo a calcular.<br><br>\n"
"Recuerde que debe operar con las mismas unidades. Si el resultado de la ganancia viene dado en dBµV la U2 será de 1µV." ) );
    textLabel1_3_3->setText( tr2i18n( "Intensidad de Entrada (I<font size=\"-1\">1</font>)" ) );
    QToolTip::add( linEdI1, tr2i18n( "Introduzca el valor" ) );
    BtnCalcI1->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( BtnCalcI1, tr2i18n( "Aprieta para calcular la I1" ) );
    textLabel2_2_3->setText( tr2i18n( "Intensidad de Salida (I<font size=\"-1\">2</font>)" ) );
    QToolTip::add( linEdI2, tr2i18n( "Introduzca el valor" ) );
    BtnCalcI2->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( BtnCalcI2, tr2i18n( "Aprieta para calcular la I2" ) );
    textLabel3_2_3->setText( tr2i18n( "Ganancia de Intensidad (G<font size=\"-1\">I</font>)" ) );
    QToolTip::add( linEdGi, tr2i18n( "Introduzca el valor" ) );
    BtnCalcGi->setText( tr2i18n( "Calcular" ) );
    QToolTip::add( BtnCalcGi, tr2i18n( "Aprieta para calcular la Gi" ) );
    groupBox5_3->setTitle( tr2i18n( "Información" ) );
    textLabel4_2_3->setText( tr2i18n( "Es obligatorio introducir dos de las tres variables, sinó el cálculo será incorrecto.<br><br>\n"
"Para conocer el resultado tendrá que pulsar el botón <i>\"Calcular\"</i> adyacente al campo que se desee conocer o pulsar la tecla <i>\"Intro\"</i> en el campo a calcular.<br><br>\n"
"Recuerde que debe operar con las mismas unidades." ) );
    textLabel5_2_3->setText( tr2i18n( "La fórmula utilizada por el cálculo es la siguiente:<br>\n"
"G<font size=\"-1\">I</font>=20 lg(I<font size=\"-1\">1</font>/I<font size=\"-1\">2</font>)" ) );
    tabWidget3->changeTab( tab_2, tr2i18n( "Cálculos de ganancias" ) );
    groupBox9->setTitle( tr2i18n( "Cálculo Complejo" ) );
    textLabel1_4->setText( tr2i18n( "Atenuación (dB)" ) );
    BtnAt->setText( tr2i18n( "Calcular" ) );
    textLabel2_4->setText( tr2i18n( "Señal de la antena (dB)" ) );
    BtnSa->setText( tr2i18n( "Calcular" ) );
    textLabel3_3->setText( tr2i18n( "Ganancia del amplificador (dB)" ) );
    BtnGa->setText( tr2i18n( "Calcular" ) );
    textLabel4_3->setText( tr2i18n( "Señal de la toma (dB)" ) );
    BtnSt->setText( tr2i18n( "Calcular" ) );
    groupBox10->setTitle( tr2i18n( "Cálculo Simple" ) );
    textLabel1_4_2->setText( tr2i18n( "Atenuación (dB)" ) );
    BtnAt_2->setText( tr2i18n( "Calcular" ) );
    textLabel2_4_2->setText( tr2i18n( "Señal de la antena (dB)" ) );
    BtnSa_2->setText( tr2i18n( "Calcular" ) );
    textLabel3_3_2->setText( tr2i18n( "Señal de Entrada (dB)" ) );
    BtnSe_2->setText( tr2i18n( "Calcular" ) );
    tabWidget3->changeTab( TabPage_2, tr2i18n( "Cáculos en instalación" ) );
    fileNewAction->setText( tr2i18n( "New" ) );
    fileNewAction->setMenuText( tr2i18n( "&New" ) );
    fileNewAction->setAccel( tr2i18n( "Ctrl+N" ) );
    fileOpenAction->setText( tr2i18n( "Open" ) );
    fileOpenAction->setMenuText( tr2i18n( "&Open..." ) );
    fileOpenAction->setAccel( tr2i18n( "Ctrl+O" ) );
    fileSaveAction->setText( tr2i18n( "Save" ) );
    fileSaveAction->setMenuText( tr2i18n( "&Save" ) );
    fileSaveAction->setAccel( tr2i18n( "Ctrl+S" ) );
    fileSaveAsAction->setText( tr2i18n( "Save As" ) );
    fileSaveAsAction->setMenuText( tr2i18n( "Save &As..." ) );
    fileSaveAsAction->setAccel( QString::null );
    filePrintAction->setText( tr2i18n( "Print" ) );
    filePrintAction->setMenuText( tr2i18n( "&Print..." ) );
    filePrintAction->setAccel( tr2i18n( "Ctrl+P" ) );
    fileExitAction->setText( tr2i18n( "Exit" ) );
    fileExitAction->setMenuText( tr2i18n( "E&xit" ) );
    fileExitAction->setAccel( QString::null );
    editUndoAction->setText( tr2i18n( "Undo" ) );
    editUndoAction->setMenuText( tr2i18n( "&Undo" ) );
    editUndoAction->setAccel( tr2i18n( "Ctrl+Z" ) );
    editRedoAction->setText( tr2i18n( "Redo" ) );
    editRedoAction->setMenuText( tr2i18n( "&Redo" ) );
    editRedoAction->setAccel( tr2i18n( "Ctrl+Y" ) );
    editCutAction->setText( tr2i18n( "Cut" ) );
    editCutAction->setMenuText( tr2i18n( "&Cut" ) );
    editCutAction->setAccel( tr2i18n( "Ctrl+X" ) );
    editCopyAction->setText( tr2i18n( "Copy" ) );
    editCopyAction->setMenuText( tr2i18n( "C&opy" ) );
    editCopyAction->setAccel( tr2i18n( "Ctrl+C" ) );
    editPasteAction->setText( tr2i18n( "Paste" ) );
    editPasteAction->setMenuText( tr2i18n( "&Paste" ) );
    editPasteAction->setAccel( tr2i18n( "Ctrl+V" ) );
    editFindAction->setText( tr2i18n( "Find" ) );
    editFindAction->setMenuText( tr2i18n( "&Find..." ) );
    editFindAction->setAccel( tr2i18n( "Ctrl+F" ) );
    helpContentsAction->setText( tr2i18n( "Contents" ) );
    helpContentsAction->setMenuText( tr2i18n( "&Contents..." ) );
    helpContentsAction->setAccel( QString::null );
    helpIndexAction->setText( tr2i18n( "Index" ) );
    helpIndexAction->setMenuText( tr2i18n( "&Index..." ) );
    helpIndexAction->setAccel( QString::null );
    helpAboutAction->setText( tr2i18n( "About" ) );
    helpAboutAction->setMenuText( tr2i18n( "&About" ) );
    helpAboutAction->setAccel( QString::null );
    menubar->findItem( 2 )->setText( tr2i18n( "&File" ) );
    menubar->findItem( 3 )->setText( tr2i18n( "&Edit" ) );
    menubar->findItem( 4 )->setText( tr2i18n( "&Help" ) );
}

#include "kantenasMain.moc"
