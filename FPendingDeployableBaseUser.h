// ScriptStruct /Script/FortniteGame.PendingDeployableBaseUser
// Size: 0x48
struct FPendingDeployableBaseUser
{
	struct FUniqueNetIdRepl UserNetId; // 0x0 (0x30)
	struct FFortUserCloudRequestHandle* LoadingCloudRequestHandle; // 0x30 (0x8)
	class UFortDeployableBaseRecord* BaseRecord; // 0x38 (0x8)
	class ADeployableBasePlot* BasePlot; // 0x40 (0x8)
};

