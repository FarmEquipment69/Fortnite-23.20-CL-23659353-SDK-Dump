// Class /Script/Engine.DamageType
// Size: 0x40
class UDamageType : public UObject
{
	unsigned char bCausedByWorld; // 0x28 (0x1)
	unsigned char bScaleMomentumByMass; // 0x28 (0x1)
	unsigned char bRadialDamageVelChange; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float DamageImpulse; // 0x2c (0x4)
	float DestructibleImpulse; // 0x30 (0x4)
	float DestructibleDamageSpreadScale; // 0x34 (0x4)
	float DamageFalloff; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

