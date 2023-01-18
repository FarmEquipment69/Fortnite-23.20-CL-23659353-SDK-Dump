// Class /Script/Engine.AvoidanceManager
// Size: 0xe0
class UAvoidanceManager : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	float DefaultTimeToLive; // 0x30 (0x4)
	float LockTimeAfterAvoid; // 0x34 (0x4)
	float LockTimeAfterClean; // 0x38 (0x4)
	float DeltaTimeToPredict; // 0x3c (0x4)
	float ArtificialRadiusExpansion; // 0x40 (0x4)
	float TestHeightDifference; // 0x44 (0x4)
	float HeightCheckMargin; // 0x48 (0x4)
	unsigned char padding_4c[0x94]; // 0x4c (0x94)

	/* Functions */

	// Function /Script/Engine.AvoidanceManager.RegisterMovementComponent (Underlying native function: RegisterMovementComponent 0x9c3292c)
	bool RegisterMovementComponent(class UMovementComponent*& MovementComp, float& AvoidanceWeight); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AvoidanceManager.GetObjectCount (Underlying native function: GetObjectCount 0x9c30b7c)
	int GetObjectCount(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AvoidanceManager.GetNewAvoidanceUID (Underlying native function: GetNewAvoidanceUID 0x9c30b58)
	int GetNewAvoidanceUID(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AvoidanceManager.GetAvoidanceVelocityForComponent (Underlying native function: GetAvoidanceVelocityForComponent 0x9c2fc50)
	struct FVector GetAvoidanceVelocityForComponent(class UMovementComponent*& MovementComp); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

