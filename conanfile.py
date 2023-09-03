import os
from conan import ConanFile
from conan.tools.cmake import cmake_layout

class HomeAutoRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"

    def requirements(self):
        self.requires("sqlite3/3.43.0")

    def build_requirements(self):
        self.tool_requires("cmake/3.27.1")
    
    def layout(self):
        cmake_layout(self)
        # self.folders.generators = os.path.join("build", str(self.settings.build_type), "generators")