// Class /Script/FortniteAI.FortAthenaAILODSettings_GenericTickingObject
// Size: 0x190
class UFortAthenaAILODSettings_GenericTickingObject : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TArray<class UClass*> SystemClasses; // 0x30 (0x10)
	struct FFortAILODSetting_GenericTickingObject BelowLowerLODSettings; // 0x40 (0x38)
	struct FFortAILODSetting_GenericTickingObject LowerLODSettings; // 0x78 (0x38)
	struct FFortAILODSetting_GenericTickingObject AboveLowerLODSettings; // 0xb0 (0x38)
	struct FFortAILODSetting_GenericTickingObject BelowNormalLODSettings; // 0xe8 (0x38)
	struct FFortAILODSetting_GenericTickingObject NormalLODSettings; // 0x120 (0x38)
	struct FFortAILODSetting_GenericTickingObject AboveNormalLODSettings; // 0x158 (0x38)
};

