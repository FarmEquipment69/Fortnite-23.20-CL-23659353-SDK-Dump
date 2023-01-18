// ScriptStruct /Script/AnimGraphRuntime.AnimPhysBodyDefinition
// Size: 0xd0
struct FAnimPhysBodyDefinition
{
	struct FBoneReference BoundBone; // 0x0 (0xc)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector BoxExtents; // 0x10 (0x18)
	struct FVector LocalJointOffset; // 0x28 (0x18)
	struct FAnimPhysConstraintSetup ConstraintSetup; // 0x40 (0x88)
	enum AnimPhysCollisionType CollisionType; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	float SphereCollisionRadius; // 0xcc (0x4)
};

