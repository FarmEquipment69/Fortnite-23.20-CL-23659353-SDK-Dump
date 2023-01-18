// Class /Script/Engine.RadialForceComponent
// Size: 0x2d0
class URadialForceComponent : public USceneComponent
{
	float Radius; // 0x2a0 (0x4)
	struct TEnumAsByte<ERadialImpulseFalloff> Falloff; // 0x2a4 (0x1)
	unsigned char unreflected_2a5[0x3]; // 0x2a5 (0x3) 
	float ImpulseStrength; // 0x2a8 (0x4)
	unsigned char bImpulseVelChange; // 0x2ac (0x1)
	unsigned char bIgnoreOwningActor; // 0x2ac (0x1)
	unsigned char unreflected_2ad[0x3]; // 0x2ad (0x3) 
	float ForceStrength; // 0x2b0 (0x4)
	float DestructibleDamage; // 0x2b4 (0x4)
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> ObjectTypesToAffect; // 0x2b8 (0x10)
	unsigned char padding_2c8[0x8]; // 0x2c8 (0x8)

	/* Functions */

	// Function /Script/Engine.RadialForceComponent.RemoveObjectTypeToAffect (Underlying native function: RemoveObjectTypeToAffect 0x9ef76e4)
	void RemoveObjectTypeToAffect(struct TEnumAsByte<EObjectTypeQuery>& ObjectType); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.RadialForceComponent.FireImpulse (Underlying native function: FireImpulse 0x8d41e70)
	void FireImpulse(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.RadialForceComponent.AddObjectTypeToAffect (Underlying native function: AddObjectTypeToAffect 0x9ef0bd0)
	void AddObjectTypeToAffect(struct TEnumAsByte<EObjectTypeQuery>& ObjectType); // (Native | Public | BlueprintCallable)
};

