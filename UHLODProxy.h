// Class /Script/Engine.HLODProxy
// Size: 0x88
class UHLODProxy : public UObject
{
	struct TArray<struct FHLODProxyMesh> ProxyMeshes; // 0x28 (0x10)
	struct TMap<class UHLODProxyDesc*, struct FHLODProxyMesh> HLODActors; // 0x38 (0x50)
};

