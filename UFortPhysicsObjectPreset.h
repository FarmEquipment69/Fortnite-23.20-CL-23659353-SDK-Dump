// Class /Script/FortniteGame.FortPhysicsObjectPreset
// Size: 0x218
class UFortPhysicsObjectPreset : public UDataAsset
{
	struct FCollisionProfileName CollisionProfile; // 0x30 (0x4)
	float PlayerImpulseMagnitude; // 0x34 (0x4)
	unsigned char bIsAffectedByPlayerMovement; // 0x38 (0x1)
	unsigned char bCanAffectPlayerMovement; // 0x38 (0x1)
	unsigned char bImpulseOnPlayerInteraction; // 0x38 (0x1)
	unsigned char bNotifyWhenBasedOn; // 0x38 (0x1)
	unsigned char bCanInteractWithVehicles; // 0x38 (0x1)
	unsigned char bTakeVehicleImpactDamage; // 0x38 (0x1)
	unsigned char bOverrideVehicleImpactDamage; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	class UClass* PhysicsObjectVehicleImpactEffect; // 0x40 (0x8)
	class UFortPhysicsObjectBuoyancyData* BuoyancyAsset; // 0x48 (0x8)
	unsigned char bCanInteractWithWater; // 0x50 (0x1)
	unsigned char bRestorePreviousCollisionProfileOnDeactivate; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	float DefaultPontoonRadius; // 0x54 (0x4)
	float MinTimeInWaterToSink; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FBuoyancyData BuoyancyData; // 0x60 (0x90)
	unsigned char bStartActive; // 0xf0 (0x1)
	unsigned char bStartAwake; // 0xf0 (0x1)
	unsigned char bEnableCCD; // 0xf0 (0x1)
	unsigned char bWakeOnUnderneathObjectDestroyed; // 0xf0 (0x1)
	unsigned char bShouldEnableTick; // 0xf0 (0x1)
	unsigned char bWakeOnImpulse; // 0xf0 (0x1)
	unsigned char bShouldImpulseOnDamage; // 0xf0 (0x1)
	unsigned char bLimitDownwardImpulseInWater; // 0xf0 (0x1)
	unsigned char bOnlyAllowImpulseOnSpecificDamageTypes; // 0xf1 (0x1)
	unsigned char unreflected_f2[0x6]; // 0xf2 (0x6) 
	struct TArray<struct FInteractionImpulseData> InteractionImpulseDataOverrides; // 0xf8 (0x10)
	unsigned char bOverrideLinearDamping; // 0x108 (0x1)
	unsigned char bOverrideAngularDamping; // 0x108 (0x1)
	unsigned char bApplyLinearDrag2; // 0x108 (0x1)
	unsigned char bApplyAngularDrag; // 0x108 (0x1)
	unsigned char bOverrideMassKg; // 0x108 (0x1)
	unsigned char bOverrideMassScale; // 0x108 (0x1)
	unsigned char bOverrideGravity; // 0x108 (0x1)
	unsigned char bOverrideErrorCorrectionValues; // 0x108 (0x1)
	unsigned char bNeverKinematicAfterMovementStateUpdatesEnabled; // 0x109 (0x1)
	unsigned char unreflected_10a[0x2]; // 0x10a (0x2) 
	float DefaultImpulseMultiplier; // 0x10c (0x4)
	float MaxImpulseMagnitude; // 0x110 (0x4)
	unsigned char unreflected_114[0x4]; // 0x114 (0x4) 
	struct TArray<struct FImpulseResponseData> ImpulseMultiplierOverrides; // 0x118 (0x10)
	float DownwardImpulseInWaterLimit; // 0x128 (0x4)
	float LinearDampingOverride; // 0x12c (0x4)
	float AngularDampingOverride; // 0x130 (0x4)
	float MassKgOverride; // 0x134 (0x4)
	bool bScaleMassWithObjectScale; // 0x138 (0x1)
	unsigned char unreflected_139[0x3]; // 0x139 (0x3) 
	float MassScaleOverride; // 0x13c (0x4)
	float GravityOverride; // 0x140 (0x4)
	unsigned char unreflected_144[0x4]; // 0x144 (0x4) 
	struct FVector LinearDrag2; // 0x148 (0x18)
	struct FVector AngularDrag; // 0x160 (0x18)
	struct FVector AngularDrag2; // 0x178 (0x18)
	struct FVector AngularDragWater; // 0x190 (0x18)
	struct FRigidBodyErrorCorrection ErrorCorrectionOverride; // 0x1a8 (0x34)
	float PawnCampDestroyTimer; // 0x1dc (0x4)
	class UPhysicalMaterial* PhysicalMaterialOverride; // 0x1e0 (0x8)
	float SleepLinearVelocity; // 0x1e8 (0x4)
	float SleepAngularVelocity; // 0x1ec (0x4)
	float TimeToSleep; // 0x1f0 (0x4)
	float TimeToDeactivate; // 0x1f4 (0x4)
	float MinHitImpulseForNotify; // 0x1f8 (0x4)
	float DamageImpulseMultiplier; // 0x1fc (0x4)
	float MinDamageToImpulse; // 0x200 (0x4)
	float MinDamageToWakeAndImpulse; // 0x204 (0x4)
	class UFortPhysicsObjectImpactDamageData* ImpactDamageData; // 0x208 (0x8)
	class UFortPhysicsObjectCollisionEffectsData* EffectsData; // 0x210 (0x8)
};

