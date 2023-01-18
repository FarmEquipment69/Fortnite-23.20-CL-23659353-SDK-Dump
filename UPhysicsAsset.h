// Class /Script/Engine.PhysicsAsset
// Size: 0x150
class UPhysicsAsset : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TArray<int> BoundsBodies; // 0x30 (0x10)
	struct TArray<class USkeletalBodySetup*> SkeletalBodySetups; // 0x40 (0x10)
	struct TArray<class UPhysicsConstraintTemplate*> ConstraintSetup; // 0x50 (0x10)
	struct FPhysicsAssetSolverSettings SolverSettings; // 0x60 (0x1c)
	struct FSolverIterations SolverIterations; // 0x7c (0x18)
	enum EPhysicsAssetSolverType SolverType; // 0x94 (0x1)
	unsigned char bNotForDedicatedServer; // 0x95 (0x1)
	unsigned char unreflected_96[0xa2]; // 0x96 (0xa2) 
	class UThumbnailInfo* ThumbnailInfo; // 0x138 (0x8)
	struct TArray<class UBodySetup*> BodySetup; // 0x140 (0x10)
};

