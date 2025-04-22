cmake_minimum_required(VERSION 3.29)
project(codeforces_cpp)

set(CMAKE_CXX_STANDARD 17)

# Problem Set
add_executable(Football96A problem-set/Football96A.cpp)
add_executable(Dragons230A problem-set/Dragons230A.cpp)
add_executable(SkibidusAndSigma2065D problem-set/SkibidusAndSigma2065D.cpp)

# Contest Round 1009 Div 3
add_executable(DrawASquare2074A contests/round1009div3/DrawASquare2074A.cpp)
add_executable(TheThirdSide2074B contests/round1009div3/TheThirdSide2074B.cpp)
add_executable(XORAndTriangle2074C contests/round1009div3/XORAndTriangle2074C.cpp)

# Contest Round 1016 Div 3
add_executable(IdealGenerator2093A contests/round1016div3/IdealGenerator2093A.cpp)

# Contest Round 1017 Div 4
add_executable(TrippiTroppi2094A contests/round1017div4/TrippiTroppi2094A.cpp)
add_executable(BobrittoBandito2094B contests/round1017div4/BobrittoBandito2094B.cpp)
add_executable(BrrBrrPatapim2094C contests/round1017div4/BrrBrrPatapim2094C.cpp)
add_executable(TeamTraining2091B problem-set/TeamTraining2091B.cpp)

# Gym: Topic Stream Mashup Graphs
add_executable(NewYearTransportation gym/topic-stream-mashup-graphs/NewYearTransportation.cpp)
add_executable(Rumor gym/topic-stream-mashup-graphs/Rumor.cpp)
add_executable(NewsDistribution gym/topic-stream-mashup-graphs/NewsDistribution.cpp)

# Gym: Topic Stream Mashup Number Theory
add_executable(MaximumGCD gym/topic-stream-mashup-number-theory/MaximumGCD.cpp)
add_executable(EhabAndGcd gym/topic-stream-mashup-number-theory/EhabAndGcd.cpp)
add_executable(CatCycle gym/topic-stream-mashup-number-theory/CatCycle.cpp)
add_executable(NewYearAndTheSphereTransmission gym/topic-stream-mashup-number-theory/NewYearAndTheSphereTransmission.cpp)

# Contest Round 1013 Div 3
add_executable(OlympiadDate2091A contests/round1013div3/OlympiadDate2091A.cpp)
add_executable(CombinationLock2091C contests/round1013div3/CombinationLock2091C.cpp)
add_executable(PlaceOfTheOlympiad2091D contests/round1013div3/PlaceOfTheOlympiad2091D.cpp)

# Contest Round 1006 Div 3

add_executable(NewWorldNewMeNewArray2072A contests/round1006div3/NewWorldNewMeNewArray2072A.cpp)
add_executable(HavingBeenATreasurerInThePastIHelpGoblinsDecieve2072B contests/round1006div3/HavingBeenATreasurerInThePastIHelpGoblinsDecieve2072B.cpp)
add_executable(ForWizardsTheExamIsEasyButICouldntHandleIt2072D contests/round1006div3/ForWizardsTheExamIsEasyButICouldntHandleIt2072D.cpp)
