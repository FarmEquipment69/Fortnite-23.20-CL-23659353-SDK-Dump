// Class /Script/TemplateSequence.TemplateSequence
// Size: 0x110
class UTemplateSequence : public UMovieSceneSequence
{
	class UMovieScene* MovieScene; // 0x68 (0x8)
	struct TWeakObjectPtr<class UClass> BoundActorClass; // 0x70 (0x28)
	struct TWeakObjectPtr<class AActor> BoundPreviewActor; // 0x98 (0x28)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0xc0 (0x50)
};

