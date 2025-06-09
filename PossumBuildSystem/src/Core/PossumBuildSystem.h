#pragma once

namespace PossumBuild
{
    enum class BuildLanguage
    {
        NONE = 0,
        CXX,
        C,
        JAVA,
        JSCRIPT,
        PYTHON,
    };

    class BuildSystem 
    {
    public:
        virtual void Build();
        virtual void Compile();
        virtual void Run();

        static Ref<BuildSystem> Create(BuildLanguage);
    };
}
