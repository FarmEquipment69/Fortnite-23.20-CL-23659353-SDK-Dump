// ScriptStruct /Script/FortniteGame.SpawnMachineRepData
// Size: 0x40
struct FSpawnMachineRepData : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector Location; // 0x10 (0x18)
	enum ESpawnMachineState SpawnMachineState; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float SpawnMachineCooldownStartTime; // 0x2c (0x4)
	float SpawnMachineCooldownEndTime; // 0x30 (0x4)
	int SpawnMachineRepDataHandle; // 0x34 (0x4)
	struct FSpawnMachineEnabledConfig EnabledConfig; // 0x38 (0x6)
	unsigned char padding_3e[0x2]; // 0x3e (0x2)
};

