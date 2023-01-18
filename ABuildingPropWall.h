// Class /Script/FortniteGame.BuildingPropWall
// Size: 0xf00
class ABuildingPropWall : public ABuildingProp
{
	struct FBuildingActorNavArea AreaPatternOverride; // 0xee8 (0x4)
	struct TEnumAsByte<EBuildingWallArea> AreaShapeType; // 0xeec (0x1)
	unsigned char unreflected_eed[0x3]; // 0xeed (0x3) 
	float AreaWidthOverride; // 0xef0 (0x4)
	unsigned char unreflected_ef4[0x4]; // 0xef4 (0x4) 
	unsigned char bOverrideAreaWidth; // 0xef8 (0x1)
	unsigned char padding_ef9[0x7]; // 0xef9 (0x7)
};

