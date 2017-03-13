Pod::Spec.new do |s|

s.name         = 'FDReachability'
s.version      = "0.1.0"
s.summary      = 'FDReachability is call SDK.'
s.license      = 'MIT'
s.author       = { "liuxiaobin" => "327847390@qq.com" }

s.homepage     = 'https://github.com/jw10126121/FDReachability.git'
s.source       = { :git => "https://github.com/jw10126121/FDReachability.git", :tag => "0.1.0"}
s.platform     = :ios
s.ios.deployment_target = "7.0"
s.frameworks = 'Foundation','UIKit'
s.ios.vendored_frameworks = 'FDReachability.framework'
s.requires_arc = true

end
