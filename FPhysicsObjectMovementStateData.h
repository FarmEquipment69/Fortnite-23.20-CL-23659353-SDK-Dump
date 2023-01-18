// ScriptStruct /Script/FortniteGame.PhysicsObjectMovementStateData
// Size: 0xf0
struct FPhysicsObjectMovementStateData
{
	enum EFortPhysicsObjectMovementState MovementState; // 0x0 (0x1)
	enum EFortPhysicsObjectMovementState PreviousMovementState; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct FHitResult LastMovingHitResult; // 0x8 (0xe0)
	float TimeMovementStateUpdated; // 0xe8 (0x4)
	float MovingStopTime; // 0xec (0x4)
};

