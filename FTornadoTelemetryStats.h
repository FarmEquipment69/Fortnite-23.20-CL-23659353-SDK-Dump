// ScriptStruct /Script/SuperstormRuntime.TornadoTelemetryStats
// Size: 0xa8
struct FTornadoTelemetryStats
{
	struct TMap<enum EFortPhysicsObjectType, int> NumActorsEnteredByType; // 0x0 (0x50)
	struct TSet<struct FUniqueNetIdRepl> EnteredPlayerAccountIds; // 0x50 (0x50)
	int NumPreBuiltStructuresDestroyed; // 0xa0 (0x4)
	int NumPlayerBuiltStructuresDestroyed; // 0xa4 (0x4)
};

