/*
 * Copyright (C) 2010 Corentin Chary <corentin.chary@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef STATIONS_SIMPLE_PRIVATE_MONTREAL_H
#define STATIONS_SIMPLE_PRIVATE_MONTREAL_H

#include "stationspluginsimple_p.h"


static const struct {
        int number;
        int arrondissementNumber;
        const char *name;
        const char *address;
        double x;
        double y;
} stations[] = {
	{ 1, 0, "Notre Dame / Place Jacques Cartier", "", 45.508183, -73.554094 },
	{ 2, 0, "St-Christophe/Ste-Catherine", "", 45.515895, -73.558230 },
	{ 3, 0, "Saint-Denis / René-Lévesque", "", 45.512890, -73.558500 },
	{ 4, 0, "Berri / Saint-Antoine", "", 45.512054, -73.553931 },
	{ 5, 0, "Métro Champ-De-Mars", "", 45.510380, -73.556530 },
	{ 6, 0, "Saint-Antoine / De L'Hôtel-De-Ville", "", 45.508750, -73.556130 },
	{ 7, 0, "De L'Hôtel-De-Ville / Sainte-Catherine", "", 45.511640, -73.562184 },
	{ 8, 0, "Sanguinet /Ste-Catherine", "", 45.512738, -73.561438 },
	{ 9, 0, "Berri / Sainte-Catherine", "", 45.514625, -73.559775 },
	{ 10, 0, "Sainte-Catherine / Saint-Denis", "", 45.513711, -73.560548 },
	{ 11, 0, "Saint-André / Saint-Antoine", "", 45.514046, -73.552512 },
	{ 12, 0, "Métro Saint-Laurent", "", 45.510660, -73.564970 },
	{ 13, 0, "Sanguinet / De Maisonneuve", "", 45.513390, -73.562550 },
	{ 14, 0, "Saint-Denis / De Maisonneuve", "", 45.514600, -73.562260 },
	{ 15, 0, "Berri / De Maisonneuve", "", 45.515299, -73.561273 },
	{ 16, 0, "Saint-André / De Maisonneuve", "", 45.516993, -73.559657 },
	{ 17, 0, "Robin / Amherst", "", 45.519050, -73.560910 },
	{ 18, 0, "Saint-André / Ontario", "", 45.518890, -73.563530 },
	{ 19, 0, "Berri / Sherbrooke", "", 45.517660, -73.566650 },
	{ 20, 0, "Sanguinet / Ontario", "", 45.514758, -73.565556 },
	{ 21, 0, "Montcalm / Ontario", "", 45.521094, -73.562447 },
	{ 22, 0, "De La Commune / Berri", "", 45.510860, -73.549830 },
	{ 23, 0, "Saint-Timothée / Sainte-Catherine", "", 45.516993, -73.557442 },
	{ 24, 0, "Notre-Dame / Saint-Gabriel", "", 45.507144, -73.555119 },
	{ 25, 0, "De La Commune / Place Jacques-Cartier", "", 45.507193, -73.552008 },
	{ 26, 0, "Le Royer / Saint-Laurent", "", 45.505890, -73.554310 },
	{ 27, 0, "Molson / William-Tremblay", "", 45.541568, -73.565030 },
	{ 28, 0, "Saint-Jacques / Saint-Laurent", "", 45.506300, -73.556460 },
	{ 30, 0, "Saint-Antoine / Saint-François-Xavier", "", 45.504490, -73.559200 },
	{ 31, 0, "Métro Place-D'Armes", "", 45.506230, -73.559760 },
	{ 32, 0, "Chenneville / Viger", "", 45.505360, -73.560930 },
	{ 33, 0, "Saint-Urbain / René-Lévesque", "", 45.507900, -73.563112 },
	{ 34, 0, "De La Gauchetière / Bleury", "", 45.504390, -73.562570 },
	{ 35, 0, "De La Commune / Saint-Sulpice", "", 45.504069, -73.553606 },
	{ 36, 0, "Saint-Nicolas / Place D'Youville", "", 45.501974, -73.555157 },
	{ 37, 0, "Mcgill / D'Youville", "", 45.499750, -73.555660 },
	{ 38, 0, "Mcgill / Des Récollets", "", 45.500779, -73.558826 },
	{ 39, 0, "Saint-Jacques / Saint-Pierre", "", 45.502800, -73.559170 },
	{ 40, 0, "Saint-Jacques / Gauvin", "", 45.500741, -73.560956 },
	{ 41, 0, "De La Gauchetière / University", "", 45.501120, -73.564930 },
	{ 42, 0, "Square Victoria", "", 45.502060, -73.562950 },
	{ 43, 0, "Union / René-Lévesque", "", 45.502720, -73.567200 },
	{ 45, 0, "De La Gauchetière / Mansfield", "", 45.498710, -73.566710 },
	{ 46, 0, "Milton / Durocher", "", 45.508118, -73.574737 },
	{ 47, 0, "King / De La Commune", "", 45.497438, -73.552802 },
	{ 48, 0, "King / Wellington", "", 45.498200, -73.554880 },
	{ 49, 0, "De La Commune / Mcgill", "", 45.498860, -73.552320 },
	{ 50, 0, "Duke / Brennan", "", 45.495684, -73.553617 },
	{ 51, 0, "Duke / Wellington", "", 45.496430, -73.555830 },
	{ 52, 0, "Saint-Antoine / Lucien-L'Allier", "", 45.494315, -73.569989 },
	{ 55, 0, "Peel / Ave Des Canadiens De Montréal", "", 45.497697, -73.568646 },
	{ 56, 0, "Drummond / René-Lévesque", "", 45.497158, -73.571556 },
	{ 57, 0, "Metcalfe / Sainte-Catherine", "", 45.500685, -73.572156 },
	{ 58, 0, "Mansfield / René-Lévesque", "", 45.500150, -73.569280 },
	{ 59, 0, "Sainte-Catherine / Mcgill College", "", 45.501760, -73.571280 },
	{ 60, 0, "Drummond / Sainte-Catherine", "", 45.498639, -73.574227 },
	{ 61, 0, "Drummond / De Maisonneuve", "", 45.499470, -73.575910 },
	{ 62, 0, "De Maisonneuve / Stanley", "", 45.500380, -73.575070 },
	{ 63, 0, "Stanley / Sherbrooke", "", 45.500970, -73.577070 },
	{ 64, 0, "De Maisonneuve / University", "", 45.503475, -73.572103 },
	{ 65, 0, "Mansfield / Sherbrooke", "", 45.502970, -73.575050 },
	{ 67, 0, "University / Milton", "", 45.506240, -73.576220 },
	{ 68, 0, "De Maisonneuve / Aylmer", "", 45.505010, -73.570690 },
	{ 69, 0, "Victoria / Sherbrooke", "", 45.504334, -73.573878 },
	{ 71, 0, "De Maisonneuve / De Bleury", "", 45.507080, -73.569170 },
	{ 72, 0, "Mackay / René-Lévesque", "", 45.494499, -73.574173 },
	{ 73, 0, "Saint-Alexandre / Sainte-Catherine", "", 45.505458, -73.567945 },
	{ 74, 0, "De Bleury / René-Lévesque", "", 45.505130, -73.564370 },
	{ 75, 0, "Square Phillips", "", 45.504010, -73.568650 },
	{ 76, 0, "Lambert-Closse / Tupper", "", 45.489609, -73.582445 },
	{ 77, 0, "Notre-Dame / Peel", "", 45.495200, -73.563280 },
	{ 78, 0, "Saint-Jacques / Guy", "", 45.491380, -73.570150 },
	{ 79, 0, "Métro Lucien-L'Allier", "", 45.494860, -73.571080 },
	{ 80, 0, "Joseph-Manseau / René-Lévesque", "", 45.491720, -73.576802 },
	{ 81, 0, "Crescent / René-Lévesque", "", 45.496060, -73.573480 },
	{ 82, 0, "Chateaubriand / Beaubien", "", 45.535431, -73.603522 },
	{ 83, 0, "Métro Atwater", "", 45.489904, -73.585962 },
	{ 84, 0, "Chomedey / De Maisonneuve", "", 45.491560, -73.583800 },
	{ 85, 0, "Lucien-L'Allier / Saint-Jacques", "", 45.493210, -73.567950 },
	{ 86, 0, "Sainte-Catherine / Saint-Marc", "", 45.492750, -73.580610 },
	{ 87, 0, "Bishop / Sainte-Catherine", "", 45.496420, -73.576160 },
	{ 88, 0, "Crescent / De Maisonneuve", "", 45.498055, -73.577515 },
	{ 89, 0, "De Maisonneuve / Mackay", "", 45.496590, -73.578510 },
	{ 90, 0, "Sherbrooke / Saint-Marc", "", 45.494350, -73.583820 },
	{ 91, 0, "Sherbrooke / Côte-Des-Neiges", "", 45.496170, -73.582220 },
	{ 92, 0, "Bishop / Sherbrooke", "", 45.498160, -73.579770 },
	{ 93, 0, "Wolfe / René-Lévesque", "", 45.516873, -73.554175 },
	{ 94, 0, "Plessis / René-Lévesque", "", 45.519323, -73.552008 },
	{ 95, 0, "René-Lévesque / Papineau", "", 45.521140, -73.549260 },
	{ 96, 0, "Sainte-Catherine / Guy", "", 45.495007, -73.578036 },
	{ 97, 0, "Logan / Fullum", "", 45.528449, -73.551085 },
	{ 98, 0, "Fullum / Jean-Langlois", "", 45.526150, -73.546120 },
	{ 99, 0, "Poupart / Sainte-Catherine", "", 45.528313, -73.546965 },
	{ 100, 0, "Parthenais / Sainte-Catherine", "", 45.526220, -73.549330 },
	{ 101, 0, "Métro Beaudry", "", 45.519070, -73.555810 },
	{ 102, 0, "Alexandre-Desève / Maisonneuve", "", 45.521900, -73.555340 },
	{ 103, 0, "Métro Papineau", "", 45.523530, -73.551990 },
	{ 105, 0, "Panet / Ontario", "", 45.522868, -73.561251 },
	{ 106, 0, "Robin / De La Visitation", "", 45.520870, -73.559220 },
	{ 107, 0, "Champlain / Ontario", "", 45.525048, -73.560036 },
	{ 108, 0, "Dorion / Ontario", "", 45.526950, -73.558210 },
	{ 109, 0, "Parthenais / Ontario", "", 45.529540, -73.556220 },
	{ 110, 0, "De Rouen / D'Iberville", "", 45.533875, -73.556396 },
	{ 111, 0, "Logan / D'Iberville", "", 45.530570, -73.549130 },
	{ 112, 0, "Alexandre De Sève / La Fontaine", "", 45.523217, -73.558187 },
	{ 113, 0, "Métro Frontenac", "", 45.533010, -73.552190 },
	{ 114, 0, "Hogan / Ontario", "", 45.535400, -73.551210 },
	{ 115, 0, "Rouen / Fullum", "", 45.532170, -73.558590 },
	{ 116, 0, "Du Havre / Hochelaga", "", 45.535915, -73.558220 },
	{ 117, 0, "Hogan / De Rouen", "", 45.536370, -73.554347 },
	{ 118, 0, "Sherbrooke / Frontenac", "", 45.536700, -73.560810 },
	{ 119, 0, "Sherbrooke / Fullum", "", 45.533750, -73.561960 },
	{ 120, 0, "Fullum / Rachel", "", 45.535123, -73.564968 },
	{ 121, 0, "De Bordeaux / Sherbrooke", "", 45.530027, -73.563176 },
	{ 122, 0, "Sainte-Famille / Sherbrooke", "", 45.510016, -73.570654 },
	{ 123, 0, "University / Prince-Arthur", "", 45.507330, -73.578450 },
	{ 124, 0, "University / Des Pins", "", 45.508165, -73.580179 },
	{ 125, 0, "Molson / William - Tremblay", "", 45.541532, -73.565258 },
	{ 126, 0, "Atwater / Sherbrooke", "", 45.491322, -73.587810 },
	{ 127, 0, "Drolet / Beaubien", "", 45.533364, -73.605837 },
	{ 128, 0, "Casgrain / Beaubien", "", 45.531425, -73.607591 },
	{ 129, 0, "Parc Du Pélican", "", 45.544830, -73.572811 },
	{ 130, 0, "9E Avenue / Dandurand", "", 45.550769, -73.577110 },
	{ 131, 0, "Marquette / Jean-Talon", "", 45.547356, -73.607610 },
	{ 132, 0, "Des Écores / Jean-Talon", "", 45.552443, -73.603002 },
	{ 133, 0, "Président-Kennedy / University", "", 45.504633, -73.572553 },
	{ 134, 0, "Drummond / Du Docteur-Penfield", "", 45.501941, -73.581265 },
	{ 135, 0, "Gascon / Rachel", "", 45.537970, -73.562700 },
	{ 136, 0, "Larivière / De Lorimier", "", 45.529155, -73.559411 },
	{ 137, 0, "Parthenais / Rachel", "", 45.534172, -73.566089 },
	{ 138, 0, "Gauthier / Papineau", "", 45.529700, -73.567370 },
	{ 139, 0, "De Bordeaux / Gauthier", "", 45.531300, -73.566000 },
	{ 140, 0, "Gauthier / Des Érables", "", 45.532370, -73.564370 },
	{ 141, 0, "Marquette / Rachel", "", 45.529802, -73.570290 },
	{ 142, 0, "De Bordeaux / Rachel", "", 45.532270, -73.568280 },
	{ 143, 0, "Garnier / Rachel", "", 45.528650, -73.571630 },
	{ 144, 0, "Rachel / Brébeuf", "", 45.526890, -73.572640 },
	{ 145, 0, "Du Parc-La Fontaine / Duluth", "", 45.524690, -73.572210 },
	{ 146, 0, "Du Parc-La Fontaine / Roy", "", 45.523084, -73.568731 },
	{ 147, 0, "Calixa-Lavallée / Sherbrooke", "", 45.524790, -73.565450 },
	{ 148, 0, "Émile-Duployé / Sherbrooke", "", 45.527290, -73.564630 },
	{ 149, 0, "Chapleau / Mont-Royal", "", 45.538670, -73.569360 },
	{ 150, 0, "Fullum / Mont-Royal", "", 45.537553, -73.570182 },
	{ 151, 0, "Des Érables / Mont-Royal", "", 45.535650, -73.571720 },
	{ 152, 0, "Chabot / Mont-Royal", "", 45.534134, -73.573492 },
	{ 153, 0, "Marie-Anne / Papineau", "", 45.531895, -73.572323 },
	{ 154, 0, "Marquette / Mont-Royal", "", 45.532290, -73.575440 },
	{ 155, 0, "Garnier / Mont-Royal", "", 45.530920, -73.576740 },
	{ 156, 0, "Marie-Anne / De La Roche", "", 45.527738, -73.576249 },
	{ 157, 0, "De La Roche / Mont-Royal", "", 45.528560, -73.578280 },
	{ 158, 0, "Gilford / Brébeuf", "", 45.530730, -73.581530 },
	{ 159, 0, "Marquette / Gilford", "", 45.533900, -73.578910 },
	{ 160, 0, "Garnier / Saint-Joseph", "", 45.532970, -73.581180 },
	{ 161, 0, "Cartier / Saint-Joseph", "", 45.535760, -73.578670 },
	{ 162, 0, "Messier / Saint-Joseph", "", 45.539280, -73.575960 },
	{ 163, 0, "Marquette / Laurier", "", 45.535430, -73.582200 },
	{ 164, 0, "Garnier / Laurier", "", 45.533880, -73.583150 },
	{ 165, 0, "Brébeuf / Laurier", "", 45.532480, -73.585070 },
	{ 166, 0, "Brébeuf / Saint-Grégoire", "", 45.534100, -73.588520 },
	{ 167, 0, "Marquette / Saint-Grégoire", "", 45.537030, -73.585840 },
	{ 168, 0, "Chabot / Masson", "", 45.538298, -73.582703 },
	{ 169, 0, "De Mentana / Saint-Grégoire", "", 45.531870, -73.590640 },
	{ 170, 0, "De Mentana / Laurier", "", 45.530040, -73.586700 },
	{ 171, 0, "Du Parc-La Fontaine / Cherrier", "", 45.522290, -73.566580 },
	{ 173, 0, "Berri / Cherrier", "", 45.519250, -73.569750 },
	{ 174, 0, "Roy / Saint-Denis", "", 45.519080, -73.572700 },
	{ 175, 0, "Saint-André / Roy", "", 45.521860, -73.570470 },
	{ 176, 0, "Saint-André / Duluth", "", 45.523120, -73.573480 },
	{ 177, 0, "Saint-André / Rachel", "", 45.524170, -73.575750 },
	{ 178, 0, "Rachel / Berri", "", 45.522721, -73.577263 },
	{ 179, 0, "Duluth / Saint-Denis", "", 45.520774, -73.575777 },
	{ 180, 0, "Laval / Rachel", "", 45.520320, -73.579760 },
	{ 181, 0, "Parc Des Amériques", "", 45.518478, -73.581378 },
	{ 182, 0, "Coloniale / Mont-Royal", "", 45.521140, -73.585590 },
	{ 183, 0, "Laval / Mont-Royal", "", 45.522413, -73.584130 },
	{ 184, 0, "Métro Mont-Royal", "", 45.524680, -73.581990 },
	{ 185, 0, "Saint-André / Mont-Royal", "", 45.526330, -73.580470 },
	{ 186, 0, "Boyer / Mont-Royal", "", 45.527430, -73.580020 },
	{ 187, 0, "Saint-André / De Bienville", "", 45.527200, -73.582260 },
	{ 188, 0, "Marie-Anne / Saint-Hubert", "", 45.524730, -73.578780 },
	{ 189, 0, "Rivard / Gilford", "", 45.526276, -73.586597 },
	{ 190, 0, "Berri / Saint-Joseph", "", 45.527490, -73.587140 },
	{ 191, 0, "Saint-André / Saint-Joseph", "", 45.528560, -73.585450 },
	{ 192, 0, "Métro Laurier", "", 45.528110, -73.588700 },
	{ 193, 0, "Henri-Julien / Laurier", "", 45.525800, -73.590300 },
	{ 194, 0, "Henri-Julien / Maguire", "", 45.527265, -73.593402 },
	{ 195, 0, "De Bullion / Boul. Saint-Joseph", "", 45.523770, -73.589780 },
	{ 196, 0, "Villeneuve / Saint-Laurent", "", 45.521570, -73.589180 },
	{ 197, 0, "Boucher / Saint-Denis", "", 45.528100, -73.591700 },
	{ 198, 0, "Hélène-Baillargeon / Saint-Denis", "", 45.529740, -73.595270 },
	{ 199, 0, "Clark / Saint-Viateur", "", 45.525172, -73.599375 },
	{ 200, 0, "Maguire / Saint-Laurent", "", 45.524570, -73.595880 },
	{ 201, 0, "Villeneuve / De L'Hôtel-De-Ville", "", 45.523525, -73.587509 },
	{ 202, 0, "Hutchison / Sherbrooke", "", 45.507810, -73.572080 },
	{ 203, 0, "Milton / Du Parc", "", 45.509710, -73.573540 },
	{ 204, 0, "Prince-Arthur / Du Parc", "", 45.510590, -73.575470 },
	{ 205, 0, "Sainte-Famille / Des Pins", "", 45.512813, -73.577017 },
	{ 206, 0, "Hutchison / Des Pins", "", 45.510690, -73.578050 },
	{ 207, 0, "Milton / Clark", "", 45.512520, -73.570620 },
	{ 208, 0, "Clark / Prince-Arthur", "", 45.513364, -73.573030 },
	{ 209, 0, "Roy / Saint-Laurent", "", 45.515610, -73.575690 },
	{ 210, 0, "Duluth / Saint-Urbain", "", 45.515660, -73.580640 },
	{ 211, 0, "Duluth / Saint-Laurent", "", 45.517100, -73.579210 },
	{ 212, 0, "Square Saint-Louis", "", 45.517350, -73.569060 },
	{ 213, 0, "Saint-Cuthbert / Saint-Urbain", "", 45.514940, -73.578210 },
	{ 214, 0, "Parc Du Mont-Royal", "", 45.514960, -73.585030 },
	{ 215, 0, "Marie-Anne / Saint-Urbain", "", 45.517780, -73.585310 },
	{ 216, 0, "De L'Hôtel-De-Ville / Roy", "", 45.517370, -73.574520 },
	{ 217, 0, "Laval / Duluth", "", 45.519237, -73.577215 },
	{ 218, 0, "Mont-Royal / Clark", "", 45.519410, -73.586850 },
	{ 219, 0, "De L'Esplanade / Mont-Royal", "", 45.518330, -73.588250 },
	{ 220, 0, "Mont-Royal / Du Parc", "", 45.517000, -73.589000 },
	{ 221, 0, "Villeneuve / Du Parc", "", 45.518290, -73.592350 },
	{ 222, 0, "Villeneuve / Saint-Urbain", "", 45.520390, -73.590260 },
	{ 223, 0, "Clark / Laurier", "", 45.522660, -73.593600 },
	{ 224, 0, "Jeanne-Mance / Laurier", "", 45.520240, -73.594940 },
	{ 225, 0, "Fairmount / Saint-Urbain", "", 45.522790, -73.595580 },
	{ 226, 0, "Waverly / Saint-Viateur", "", 45.524025, -73.600422 },
	{ 227, 0, "Saint-Viateur / Du Parc", "", 45.522460, -73.601900 },
	{ 228, 0, "Bernard / Clark", "", 45.526970, -73.602610 },
	{ 229, 0, "Saint-Dominique / Saint-Viateur", "", 45.526543, -73.598233 },
	{ 230, 0, "Laurier / De Lorimier", "", 45.538020, -73.578460 },
	{ 232, 0, "Parthenais / Gilford", "", 45.537975, -73.574780 },
	{ 233, 0, "Chapleau / Marie-Anne", "", 45.537512, -73.566958 },
	{ 234, 0, "De Bordeaux / Jean-Talon", "", 45.549704, -73.605512 },
	{ 236, 0, "Fairmount / Hutchison", "", 45.519486, -73.598419 },
	{ 237, 0, "Querbes / Laurier", "", 45.517345, -73.597724 },
	{ 239, 0, "Bloomfield / Bernard", "", 45.520532, -73.608144 },
	{ 241, 0, "Bloomfield / Van Horne", "", 45.522608, -73.613178 },
	{ 242, 0, "Métro Outremont", "", 45.520265, -73.614887 },
	{ 243, 0, "Casgrain / Saint-Zotique", "", 45.533040, -73.611080 },
	{ 244, 0, "Dante / Alma", "", 45.534790, -73.611900 },
	{ 245, 0, "Bélanger / Saint-Denis", "", 45.536960, -73.611990 },
	{ 246, 0, "Henri-Julien / Jean-Talon", "", 45.537070, -73.615290 },
	{ 247, 0, "Casgrain / Mozart", "", 45.534788, -73.614726 },
	{ 248, 0, "Mozart / Saint-Laurent", "", 45.533180, -73.615440 },
	{ 249, 0, "Saint-Vallier / Jean-Talon", "", 45.538921, -73.613701 },
	{ 250, 0, "Boyer / Bélanger", "", 45.540060, -73.608970 },
	{ 251, 0, "Boyer / Saint-Zotique", "", 45.538480, -73.605560 },
	{ 253, 0, "Saint-Vallier / Saint-Zotique", "", 45.536308, -73.607752 },
	{ 254, 0, "Parc Père-Marquette", "", 45.537035, -73.593126 },
	{ 255, 0, "Holt / De Lorimier", "", 45.541840, -73.586440 },
	{ 256, 0, "Cartier / Des Carrières", "", 45.539890, -73.588070 },
	{ 257, 0, "Des Érables / Rosemont", "", 45.543630, -73.588440 },
	{ 258, 0, "De La Roche /  Bellechasse", "", 45.537202, -73.597884 },
	{ 259, 0, "Bellechasse / Marquette", "", 45.541069, -73.593864 },
	{ 260, 0, "Chabot / Bellechasse", "", 45.542700, -73.592120 },
	{ 261, 0, "Louis-Hémon / Bellechasse", "", 45.545275, -73.589894 },
	{ 262, 0, "Louis-Hébert / Beaubien", "", 45.548570, -73.592680 },
	{ 263, 0, "De Bordeaux / Beaubien", "", 45.544750, -73.594900 },
	{ 264, 0, "Chambord / Beaubien", "", 45.539964, -73.599716 },
	{ 265, 0, "De Normanville / Saint-Zotique", "", 45.540830, -73.603840 },
	{ 266, 0, "Fabre / Saint-Zotique", "", 45.543541, -73.600982 },
	{ 267, 0, "De Gaspé / De Bellechasse", "", 45.530512, -73.603949 },
	{ 268, 0, "Des Érables / Saint-Zotique", "", 45.547700, -73.597210 },
	{ 269, 0, "Garnier / Bélanger", "", 45.544471, -73.605145 },
	{ 270, 0, "Cartier / Bélanger", "", 45.546910, -73.602810 },
	{ 271, 0, "Chambord / Jean-Talon", "", 45.544828, -73.610458 },
	{ 272, 0, "De Normanville / Bélanger", "", 45.542280, -73.606920 },
	{ 273, 0, "Louis-Hébert / Saint-Zotique", "", 45.550010, -73.595760 },
	{ 274, 0, "Louis-Hébert / Bélanger", "", 45.551457, -73.598852 },
	{ 275, 0, "Fabre / Beaubien", "", 45.542055, -73.597793 },
	{ 276, 0, "Parc Rosemont", "", 45.544377, -73.581018 },
	{ 277, 0, "Métro Rosemont", "", 45.531154, -73.598185 },
	{ 278, 0, "Boyer / Rosemont", "", 45.534136, -73.595478 },
	{ 279, 0, "St-André / Bellechasse", "", 45.535304, -73.599387 },
	{ 280, 0, "Augustin-Cantin / Shearer", "", 45.483977, -73.563576 },
	{ 281, 0, "Louis-Colin / Mckenna", "", 45.499916, -73.618089 },
	{ 282, 0, "Édouard-Montpetit / Stirling", "", 45.507230, -73.615085 },
	{ 283, 0, "Chemin De La Tour", "", 45.503023, -73.616531 },
	{ 284, 0, "Waverly / Van Horne", "", 45.527363, -73.607723 },
	{ 285, 0, "Hutchison / Van Horne", "", 45.525021, -73.610737 },
	{ 286, 0, "Bernard / Jeanne-Mance", "", 45.524296, -73.604847 },
	{ 287, 0, "15E Avenue / Bélanger", "", 45.560064, -73.591364 },
	{ 288, 0, "10E Avenue / Rosemont", "", 45.552649, -73.581185 },
	{ 289, 0, "Boyer / Beaubien", "", 45.537041, -73.602026 },
	{ 290, 0, "Peel / Ottawa", "", 45.494270, -73.559790 },
	{ 291, 0, "Notre-Dame / De La Montagne", "", 45.493029, -73.564818 },
	{ 292, 0, "Guy / Notre-Dame", "", 45.489960, -73.567070 },
	{ 293, 0, "Louis-Hémon / Beaubien", "", 45.547050, -73.593530 },
	{ 294, 0, "Des Érables / Bélanger", "", 45.549257, -73.600987 },
	{ 297, 0, "Métro Charlevoix", "", 45.478228, -73.569651 },
	{ 301, 0, "Des Seigneurs / Notre-Dame", "", 45.487670, -73.568950 },
	{ 302, 0, "Des Seigneurs / Quesnel", "", 45.489560, -73.572960 },
	{ 303, 0, "Georges-Vanier / Notre-Dame", "", 45.485010, -73.571780 },
	{ 304, 0, "Duvernay / Charlevoix", "", 45.482050, -73.574910 },
	{ 305, 0, "Quesnel / Vinet", "", 45.485889, -73.577514 },
	{ 306, 0, "Marché Atwater", "", 45.480359, -73.577102 },
	{ 307, 0, "Métro Lionel-Groulx", "", 45.482717, -73.581281 },
	{ 308, 0, "Saint-Antoine / Canning (Metro George-Vanier)", "", 45.489100, -73.576560 },
	{ 309, 0, "Wilderton / Côte-Sainte-Catherine", "", 45.507874, -73.618965 },
	{ 310, 0, "Wilderton Crescent / Van Horne", "", 45.509166, -73.624410 },
	{ 311, 0, "Louis-Colin / Édouard-Montpetit", "", 45.503258, -73.618869 },
	{ 312, 0, "Hudson / Côte-Sainte-Catherine", "", 45.503857, -73.622600 },
	{ 313, 0, "Jean-Brillant / Côte-Des-Neiges", "", 45.495782, -73.622008 },
	{ 314, 0, "Kent / Côte-Des-Neiges", "", 45.501302, -73.633161 },
	{ 315, 0, "Gatineau / Côte-Sainte-Catherine", "", 45.499365, -73.626611 },
	{ 316, 0, "Ellendale / Côte-Des-Neiges", "", 45.499594, -73.629363 },
	{ 317, 0, "Lacombe / Gatineau", "", 45.497434, -73.622805 },
	{ 318, 0, "Parc Jean-Brillant", "", 45.497011, -73.618575 },
	{ 319, 0, "Jardin Botanique", "", 45.555029, -73.554902 },
	{ 320, 0, "Nicolet / Sherbrooke", "", 45.549762, -73.554843 },
	{ 321, 0, "Métro Préfontaine", "", 45.541814, -73.554635 },
	{ 322, 0, "Métro Joliette", "", 45.546847, -73.551517 },
	{ 323, 0, "D'Orléans / Hochelaga", "", 45.550668, -73.549502 },
	{ 324, 0, "Boyer / Jean-Talon", "", 45.541484, -73.612441 },
	{ 325, 0, "Aylwin / Ontario", "", 45.544375, -73.545324 },
	{ 326, 0, "Darling / Rouen", "", 45.543434, -73.550012 },
	{ 327, 0, "Ontario / Dézéry", "", 45.541031, -73.547134 },
	{ 328, 0, "Valois / Ontario", "", 45.547258, -73.543728 },
	{ 329, 0, "Pierre-De-Coubertin / Aird", "", 45.558960, -73.548687 },
	{ 330, 0, "Marché Maisonneuve", "", 45.553491, -73.539310 },
	{ 331, 0, "Desjardins / Ontario", "", 45.551207, -73.540866 },
	{ 332, 0, "Guizot / Saint-Laurent", "", 45.539964, -73.634319 },
	{ 333, 0, "Faillon / Saint-Denis", "", 45.511321, -73.564367 },
	{ 334, 0, "Gounod / Saint-Denis", "", 45.541791, -73.625894 },
	{ 335, 0, "De Gaspé / Jarry", "", 45.540627, -73.630089 },
	{ 336, 0, "Guizot / Saint-Denis", "", 45.543376, -73.632267 },
	{ 337, 0, "De Gaspé / De Liège", "", 45.542579, -73.636557 },
	{ 338, 0, "Foucher / Leman", "", 45.545987, -73.631562 },
	{ 339, 0, "Lajeunesse / Jarry", "", 45.543618, -73.628335 },
	{ 340, 0, "Du Rosaire / Saint-Hubert", "", 45.544670, -73.621581 },
	{ 341, 0, "Faillon / Saint-Hubert", "", 45.542892, -73.617822 },
	{ 342, 0, "Boyer / Jarry", "", 45.547283, -73.625377 },
	{ 343, 0, "Normanville / Tillemont", "", 45.547957, -73.619878 },
	{ 344, 0, "De La Roche / Everett", "", 45.544867, -73.614841 },
	{ 345, 0, "Chambord/ Jarry", "", 45.549859, -73.622070 },
	{ 346, 0, "Marquette / Villeray", "", 45.550551, -73.615021 },
	{ 347, 0, "Louis-Hémon / Villeray", "", 45.554931, -73.610711 },
	{ 348, 0, "Molson / L.O. David", "", 45.556289, -73.605966 },
	{ 349, 0, "Sagard / Everett", "", 45.552366, -73.606588 },
	{ 350, 0, "Garnier / Everett", "", 45.547604, -73.612100 },
	{ 351, 0, "1Ère Avenue / Jean-Talon", "", 45.554728, -73.600819 },
	{ 352, 0, "Métro Saint-Michel", "", 45.559632, -73.599743 },
	{ 353, 0, "17E Avenue / Jean-Talon", "", 45.562787, -73.594609 },
	{ 354, 0, "22E Avenue / Jean-Talon", "", 45.565829, -73.591771 },
	{ 355, 0, "Gounod / Saint-Laurent", "", 45.538075, -73.628205 },
	{ 356, 0, "De Liège / Lajeunesse", "", 45.545542, -73.634748 },
	{ 357, 0, "De Gaspé / Villeray", "", 45.538920, -73.624094 },
	{ 358, 0, "2E Avenue / Bélanger", "", 45.554216, -73.596465 },
	{ 359, 0, "21E Avenue / Bélanger", "", 45.564203, -73.588215 },
	{ 360, 0, "19E Avenue / Saint-Zotique", "", 45.561630, -73.585396 },
	{ 361, 0, "12E Avenue / Saint-Zotique", "", 45.556905, -73.589250 },
	{ 362, 0, "6E Avenue / Saint-Zotique", "", 45.553277, -73.592241 },
	{ 363, 0, "16E Avenue / Beaubien", "", 45.558496, -73.583489 },
	{ 364, 0, "9E Avenue / Beaubien", "", 45.553785, -73.587328 },
	{ 365, 0, "1Ere Avenue / Beaubien", "", 45.550476, -73.590446 },
	{ 366, 0, "1Ere Avenue / Rosemont", "", 45.547997, -73.585230 },
	{ 367, 0, "6E Avenue / Rosemont", "", 45.550609, -73.583054 },
	{ 368, 0, "Parc Campbell", "", 45.555241, -73.581587 },
	{ 369, 0, "16E Avenue / Rosemont", "", 45.556723, -73.577636 },
	{ 370, 0, "Charlemagne / Rosemont", "", 45.559566, -73.574640 },
	{ 371, 0, "3E Avenue / Dandurand", "", 45.547362, -73.579221 },
	{ 372, 0, "10E Avenue / Masson", "", 45.550330, -73.573734 },
	{ 373, 0, "Lafond / Dandurand", "", 45.553571, -73.575085 },
	{ 374, 0, "D'Orléans / Masson", "", 45.557192, -73.569847 },
	{ 375, 0, "4E Avenue / Masson", "", 45.546992, -73.575445 },
	{ 376, 0, "Molson / Masson", "", 45.544123, -73.577049 },
	{ 377, 0, "7E Avenue / Saint-Joseph", "", 45.547155, -73.569901 },
	{ 378, 0, "15E Avenue / Laurier", "", 45.553408, -73.569531 },
	{ 379, 0, "Jeanne-D'Arc / Saint-Joseph", "", 45.556409, -73.563439 },
	{ 380, 0, "18E Avenue / Saint-Joseph", "", 45.554165, -73.564742 },
	{ 381, 0, "12E Avenue / Saint-Joseph", "", 45.550089, -73.568045 },
	{ 382, 0, "Parc Jean-Duceppe", "", 45.544326, -73.567197 },
	{ 383, 0, "D'Orléans / Mont-Royal", "", 45.554142, -73.559864 },
	{ 384, 0, "Parc J.-Arthur-Champagne", "", 45.551584, -73.561916 },
	{ 385, 0, "Omer-Lavallée / Midway", "", 45.545474, -73.561937 },
	{ 386, 0, "Chambly / Rachel", "", 45.549695, -73.558053 },
	{ 387, 0, "Darling / Sherbrooke", "", 45.545425, -73.556527 },
	{ 388, 0, "Métro Pie-Ix", "", 45.553879, -73.551761 },
	{ 389, 0, "Parc Outremont", "", 45.518215, -73.603251 },
	{ 390, 0, "Stuart / Côte-Ste-Catherine", "", 45.515290, -73.606280 },
	{ 391, 0, "Stuart / Bernard", "", 45.517457, -73.610874 },
	{ 392, 0, "Rockland / Lajoie", "", 45.515617, -73.614991 },
	{ 393, 0, "Davaar / Côte-Sainte-Catherine", "", 45.514379, -73.610871 },
	{ 394, 0, "Mont-Royal / Vincent-D'Indy", "", 45.510086, -73.611429 },
	{ 396, 0, "Faillon / St-Laurent", "", 45.536152, -73.622351 },
	{ 397, 0, "Saint-Dominique / De Castelneau", "", 45.536013, -73.619299 },
	{ 398, 0, "Cartier / Everett", "", 45.549954, -73.610005 },
	{ 399, 0, "Lionel-Groulx / George-Vanier", "", 45.486457, -73.573286 },
	{ 401, 0, "De L'Hôtel-De-Ville / Sherbrooke", "", 45.514531, -73.568471 },
	{ 403, 0, "Metcalfe / Maisonneuve", "", 45.501565, -73.573991 },
	{ 404, 0, "Prince-Arthur / Saint-Urbain", "", 45.512762, -73.573489 },
	{ 405, 0, "Hutchison / Ogilvy", "", 45.530189, -73.624521 },
	{ 406, 0, "Métro Jean-Drapeau", "", 45.512097, -73.533820 },
	{ 407, 0, "Quai De La Navette Fluviale", "", 45.513687, -73.538355 },
	{ 408, 0, "Bassin Olympique", "", 45.517158, -73.526967 },
	{ 409, 0, "Floralies / Pont Des Iles", "", 45.508242, -73.529134 },
	{ 413, 0, "Des Trinitaires / Lamont", "", 45.446644, -73.602696 },
	{ 414, 0, "Senkus / Newman", "", 45.444472, -73.614428 },
	{ 415, 0, "Cordner / Léger", "", 45.444236, -73.625741 },
	{ 416, 0, "Grenet / Thimens", "", 45.514565, -73.690909 },
	{ 417, 0, "Décarie / De L'Église", "", 45.511481, -73.678247 },
	{ 418, 0, "Lapierre / Leclerc", "", 45.435759, -73.605545 },
	{ 419, 0, "Hardy / Cordner", "", 45.437313, -73.635446 },
	{ 421, 0, "Marcel Laurin / De L'Église", "", 45.507644, -73.683962 },
	{ 422, 0, "Côte-Vertu / Décarie", "", 45.514076, -73.683372 },
	{ 423, 0, "Sainte-Croix / Du Collège", "", 45.511531, -73.672534 },
	{ 424, 0, "Basile-Routhier / Crémazie", "", 45.547009, -73.637951 },
	{ 425, 0, "Chabanel / St-Laurent", "", 45.544210, -73.651429 },
	{ 426, 0, "Chabanel / Ave Du Parc", "", 45.538739, -73.654616 },
	{ 427, 0, "Chabanel / Lajeunesse", "", 45.549351, -73.648160 },
	{ 428, 0, "Ross / Ave De Léglise", "", 45.462742, -73.565845 },
	{ 429, 0, "Willibord / Verdun", "", 45.459707, -73.571438 },
	{ 430, 0, "Rushbrooke / Ave Caisse", "", 45.470605, -73.565459 },
	{ 431, 0, "Ch De La Pointe Nord / Jacques- Le- Ber", "", 45.472659, -73.542244 },
	{ 432, 0, "Emile-Journault / Marcel Cadieux", "", 45.552232, -73.639539 },
	{ 433, 0, "Place Du Commerce", "", 45.467290, -73.542357 },
	{0, 0, NULL, NULL, 0., 0.}
};


struct StationsPluginSimplePrivateMontreal : StationsPluginSimplePrivate {
  StationsPluginSimplePrivateMontreal() {
    rect = QRectF(QPointF(45.308867, -73.754242), QPointF(45.708867, -73.354242));
    center = QPointF(45.508867, -73.554242);
    statusUrl = "";
    infosUrl = "https://profil.bixi.ca/data/bikeStations.xml";
  }

  QList < Station * > fetchAll(StationsPlugin *plugin) {
    QList < Station * > list;

    for (int i = 0; stations[i].name; ++i) {
      Station *station = new Station(plugin);

      station->setId(stations[i].number);
      station->setName(QString::fromUtf8(stations[i].name));
      station->setDescription(QString::fromUtf8(stations[i].address));
      station->setPos(QPointF(stations[i].x, stations[i].y));
      station->setRegion(QString("Montreal %1").arg(stations[i].arrondissementNumber));
      list.append(station);
    }

    return list;
  }

  QStringList regions() {
    QStringList ret;


    return ret;
  }
};

#endif /* STATIONS_SIMPLE_PRIVATE_MONTREAL_H */

