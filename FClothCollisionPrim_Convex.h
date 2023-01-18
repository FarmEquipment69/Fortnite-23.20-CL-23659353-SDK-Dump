// ScriptStruct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// Size: 0x28
struct FClothCollisionPrim_Convex
{
	struct TArray<struct FClothCollisionPrim_ConvexFace> Faces; // 0x0 (0x10)
	struct TArray<struct FVector> SurfacePoints; // 0x10 (0x10)
	int BoneIndex; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

