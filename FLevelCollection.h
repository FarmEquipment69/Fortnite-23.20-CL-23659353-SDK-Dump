// ScriptStruct /Script/Engine.LevelCollection
// Size: 0x78
struct FLevelCollection
{
	class AGameStateBase* GameState; // 0x8 (0x8)
	class UNetDriver* NetDriver; // 0x10 (0x8)
	class UDemoNetDriver* DemoNetDriver; // 0x18 (0x8)
	class ULevel* PersistentLevel; // 0x20 (0x8)
	struct TSet<class ULevel*> Levels; // 0x28 (0x50)
};

