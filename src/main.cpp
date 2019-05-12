 //#include "create_triangle/createtriangle.hpp"
 //#include "draw_triangle/triangledrawer.h"
// using namespace triangledrawerconstants;

//#include "draw_line\linedrawer.h"

//#include "3d_cube/cube.h"
#include "projection_cube/projection_cube.h"
#include "solar_sys/Solar.h"
#include "lighting/Lighting.h"
#include "shadow_mapping\shadow_mapping.h"

int main() {
	/*LineDrawer drawer = LineDrawer();
	drawer.drawLine();*/
	/*TriangleDrawer solution(OLD_VERSION);
	solution.createGUI();*/
	/*Cube cube;
	cube.drawCube();
	Solar solar;
	solar.drawSolarSys();*/
	/*Projection solution;
	solution.drawCube();*/
	/*Lighting solution;
	solution.createLightingScene();*/
	ShadowMapping solution;
	solution.createShadowScene();
	return 0;
}