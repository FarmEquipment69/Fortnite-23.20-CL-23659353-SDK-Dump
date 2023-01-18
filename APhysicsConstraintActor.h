// Class /Script/Engine.PhysicsConstraintActor
// Size: 0x2a8
class APhysicsConstraintActor : public ARigidBodyBase
{
	class UPhysicsConstraintComponent* ConstraintComp; // 0x288 (0x8)
	class AActor* ConstraintActor1; // 0x290 (0x8)
	class AActor* ConstraintActor2; // 0x298 (0x8)
	unsigned char bDisableCollision; // 0x2a0 (0x1)
	unsigned char padding_2a1[0x7]; // 0x2a1 (0x7)
};

