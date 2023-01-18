// ScriptStruct /Script/Engine.ActorComponentInstanceData
// Size: 0x68
struct FActorComponentInstanceData : FInstanceCacheDataBase
{
	class UObject* SourceComponentTemplate; // 0x58 (0x8)
	enum EComponentCreationMethod SourceComponentCreationMethod; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	int SourceComponentTypeSerializedIndex; // 0x64 (0x4)
};

