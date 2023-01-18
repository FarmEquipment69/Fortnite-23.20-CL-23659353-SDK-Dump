// Class /Script/PhysicsCore.PhysicalMaterial
// Size: 0x80
class UPhysicalMaterial : public UObject
{
	float Friction; // 0x28 (0x4)
	float StaticFriction; // 0x2c (0x4)
	struct TEnumAsByte<EFrictionCombineMode> FrictionCombineMode; // 0x30 (0x1)
	bool bOverrideFrictionCombineMode; // 0x31 (0x1)
	unsigned char unreflected_32[0x2]; // 0x32 (0x2) 
	float Restitution; // 0x34 (0x4)
	struct TEnumAsByte<EFrictionCombineMode> RestitutionCombineMode; // 0x38 (0x1)
	bool bOverrideRestitutionCombineMode; // 0x39 (0x1)
	unsigned char unreflected_3a[0x2]; // 0x3a (0x2) 
	float Density; // 0x3c (0x4)
	float SleepLinearVelocityThreshold; // 0x40 (0x4)
	float SleepAngularVelocityThreshold; // 0x44 (0x4)
	int SleepCounterThreshold; // 0x48 (0x4)
	float RaiseMassToPower; // 0x4c (0x4)
	float DestructibleDamageThresholdScale; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	class UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x58 (0x8)
	struct TEnumAsByte<EPhysicalSurface> SurfaceType; // 0x60 (0x1)
	unsigned char padding_61[0x1f]; // 0x61 (0x1f)
};

