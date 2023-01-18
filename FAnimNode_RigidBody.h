// ScriptStruct /Script/AnimGraphRuntime.AnimNode_RigidBody
// Size: 0x990
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset* OverridePhysicsAsset; // 0xc8 (0x8)
	unsigned char unreflected_d0[0x128]; // 0xd0 (0x128) 
	struct FVector OverrideWorldGravity; // 0x1f8 (0x18)
	struct FVector ExternalForce; // 0x210 (0x18)
	struct FVector ComponentLinearAccScale; // 0x228 (0x18)
	struct FVector ComponentLinearVelScale; // 0x240 (0x18)
	struct FVector ComponentAppliedLinearAccClamp; // 0x258 (0x18)
	struct FSimSpaceSettings SimSpaceSettings; // 0x270 (0x68)
	float CachedBoundsScale; // 0x2d8 (0x4)
	struct FBoneReference BaseBoneRef; // 0x2dc (0xc)
	struct TEnumAsByte<ECollisionChannel> OverlapChannel; // 0x2e8 (0x1)
	enum ESimulationSpace SimulationSpace; // 0x2e9 (0x1)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x2ea (0x1)
	bool bUseExternalClothCollision; // 0x2eb (0x1)
	unsigned char unreflected_2ec[0x1]; // 0x2ec (0x1) 
	unsigned char bEnableWorldGeometry; // 0x2ed (0x1)
	unsigned char bOverrideWorldGravity; // 0x2ed (0x1)
	unsigned char bTransferBoneVelocities; // 0x2ed (0x1)
	unsigned char bFreezeIncomingPoseOnStart; // 0x2ed (0x1)
	unsigned char bClampLinearTranslationLimitToRefPose; // 0x2ed (0x1)
	unsigned char unreflected_2ee[0x2]; // 0x2ee (0x2) 
	float WorldSpaceMinimumScale; // 0x2f0 (0x4)
	float EvaluationResetTime; // 0x2f4 (0x4)
	unsigned char unreflected_2f8[0x1]; // 0x2f8 (0x1) 
	enum ESimulationTiming SimulationTiming; // 0x2f9 (0x1)
	unsigned char padding_2fa[0x696]; // 0x2fa (0x696)
};

