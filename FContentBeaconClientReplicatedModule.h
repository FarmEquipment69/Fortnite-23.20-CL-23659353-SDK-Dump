// ScriptStruct /Script/FortniteGame.ContentBeaconClientReplicatedModule
// Size: 0xd0
struct FContentBeaconClientReplicatedModule
{
	struct FVkResolvedModule ResolvedModule; // 0x0 (0x88)
	struct FClientModuleId ModuleId; // 0x88 (0x40)
	enum EContentRequestInstallState DesiredState; // 0xc8 (0x1)
	bool bActiveOnServer; // 0xc9 (0x1)
	unsigned char padding_ca[0x6]; // 0xca (0x6)
};

