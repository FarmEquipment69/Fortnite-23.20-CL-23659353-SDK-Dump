// Class /Script/ClothingSystemRuntimeNv.ClothConfigNv
// Size: 0x1a0
class UClothConfigNv : public UClothConfigCommon
{
	enum EClothingWindMethodNv ClothingWindMethod; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	struct FClothConstraintSetupNv VerticalConstraint; // 0x2c (0x10)
	struct FClothConstraintSetupNv HorizontalConstraint; // 0x3c (0x10)
	struct FClothConstraintSetupNv BendConstraint; // 0x4c (0x10)
	struct FClothConstraintSetupNv ShearConstraint; // 0x5c (0x10)
	float SelfCollisionRadius; // 0x6c (0x4)
	float SelfCollisionStiffness; // 0x70 (0x4)
	float SelfCollisionCullScale; // 0x74 (0x4)
	struct FVector Damping; // 0x78 (0x18)
	float Friction; // 0x90 (0x4)
	float WindDragCoefficient; // 0x94 (0x4)
	float WindLiftCoefficient; // 0x98 (0x4)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	struct FVector LinearDrag; // 0xa0 (0x18)
	struct FVector AngularDrag; // 0xb8 (0x18)
	struct FVector LinearInertiaScale; // 0xd0 (0x18)
	struct FVector AngularInertiaScale; // 0xe8 (0x18)
	struct FVector CentrifugalInertiaScale; // 0x100 (0x18)
	float SolverFrequency; // 0x118 (0x4)
	float StiffnessFrequency; // 0x11c (0x4)
	float GravityScale; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	struct FVector GravityOverride; // 0x128 (0x18)
	bool bUseGravityOverride; // 0x140 (0x1)
	unsigned char unreflected_141[0x3]; // 0x141 (0x3) 
	float TetherStiffness; // 0x144 (0x4)
	float TetherLimit; // 0x148 (0x4)
	float CollisionThickness; // 0x14c (0x4)
	float AnimDriveSpringStiffness; // 0x150 (0x4)
	float AnimDriveDamperStiffness; // 0x154 (0x4)
	enum EClothingWindMethod_Legacy WindMethod; // 0x158 (0x1)
	unsigned char unreflected_159[0x3]; // 0x159 (0x3) 
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x15c (0x10)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x16c (0x10)
	struct FClothConstraintSetup_Legacy BendConstraintConfig; // 0x17c (0x10)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x18c (0x10)
	unsigned char padding_19c[0x4]; // 0x19c (0x4)
};
