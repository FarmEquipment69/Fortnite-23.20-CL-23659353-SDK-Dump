// ScriptStruct /Script/ClothingSystemRuntimeInterface.ClothCollisionData
// Size: 0x40
struct FClothCollisionData
{
	struct TArray<struct FClothCollisionPrim_Sphere> Spheres; // 0x0 (0x10)
	struct TArray<struct FClothCollisionPrim_SphereConnection*> SphereConnections; // 0x10 (0x10)
	struct TArray<struct FClothCollisionPrim_Convex> Convexes; // 0x20 (0x10)
	struct TArray<struct FClothCollisionPrim_Box> Boxes; // 0x30 (0x10)
};

