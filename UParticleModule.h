// Class /Script/Engine.ParticleModule
// Size: 0x30
class UParticleModule : public UObject
{
	unsigned char bSpawnModule; // 0x28 (0x1)
	unsigned char bUpdateModule; // 0x28 (0x1)
	unsigned char bFinalUpdateModule; // 0x28 (0x1)
	unsigned char bUpdateForGPUEmitter; // 0x28 (0x1)
	unsigned char bCurvesAsColor; // 0x28 (0x1)
	unsigned char b3DDrawMode; // 0x28 (0x1)
	unsigned char bSupported3DDrawMode; // 0x28 (0x1)
	unsigned char bEnabled; // 0x28 (0x1)
	unsigned char bEditable; // 0x29 (0x1)
	unsigned char LODDuplicate; // 0x29 (0x1)
	unsigned char bSupportsRandomSeed; // 0x29 (0x1)
	unsigned char bRequiresLoopingNotification; // 0x29 (0x1)
	unsigned char LODValidity; // 0x2a (0x1)
	unsigned char padding_2b[0x5]; // 0x2b (0x5)
};

