// ScriptStruct /Script/IKRig.TargetChainSpeedPlantSettings
// Size: 0x14
struct FTargetChainSpeedPlantSettings
{
	bool EnableSpeedPlanting; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName SpeedCurveName; // 0x4 (0x4)
	float SpeedThreshold; // 0x8 (0x4)
	float UnplantStiffness; // 0xc (0x4)
	float UnplantCriticalDamping; // 0x10 (0x4)
};

