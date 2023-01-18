// Class /Script/SuperstormRuntime.TornadoRadialForce
// Size: 0x2c8
class ATornadoRadialForce : public AFieldSystemActor
{
	float Radius; // 0x290 (0x4)
	float Strength; // 0x294 (0x4)
	float StartTime; // 0x298 (0x4)
	float StopTime; // 0x29c (0x4)
	float IncomingDuration; // 0x2a0 (0x4)
	float OutgoingDuration; // 0x2a4 (0x4)
	unsigned char unreflected_2a8[0x8]; // 0x2a8 (0x8) 
	class URadialVector* RadialVector; // 0x2b0 (0x8)
	class URadialFalloff* RadialFalloff; // 0x2b8 (0x8)
	class UOperatorField* OperatorField; // 0x2c0 (0x8)
};

