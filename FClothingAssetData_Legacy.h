// ScriptStruct /Script/Engine.ClothingAssetData_Legacy
// Size: 0x70
struct FClothingAssetData_Legacy
{
	struct FName AssetName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString ApexFileName; // 0x8 (0x10)
	bool bClothPropertiesChanged; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	struct FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c (0x50)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

