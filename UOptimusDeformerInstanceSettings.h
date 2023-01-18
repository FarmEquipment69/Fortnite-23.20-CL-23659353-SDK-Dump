// Class /Script/OptimusCore.OptimusDeformerInstanceSettings
// Size: 0x40
class UOptimusDeformerInstanceSettings : public UMeshDeformerInstanceSettings
{
	struct TWeakObjectPtr<class UOptimusDeformer> Deformer; // 0x28 (0x8)
	struct TArray<struct FOptimusDeformerInstanceComponentBinding*> Bindings; // 0x30 (0x10)
};

