
(cl:in-package :asdf)

(defsystem "learning_action-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "ReadbookAction" :depends-on ("_package_ReadbookAction"))
    (:file "_package_ReadbookAction" :depends-on ("_package"))
    (:file "ReadbookActionFeedback" :depends-on ("_package_ReadbookActionFeedback"))
    (:file "_package_ReadbookActionFeedback" :depends-on ("_package"))
    (:file "ReadbookActionGoal" :depends-on ("_package_ReadbookActionGoal"))
    (:file "_package_ReadbookActionGoal" :depends-on ("_package"))
    (:file "ReadbookActionResult" :depends-on ("_package_ReadbookActionResult"))
    (:file "_package_ReadbookActionResult" :depends-on ("_package"))
    (:file "ReadbookFeedback" :depends-on ("_package_ReadbookFeedback"))
    (:file "_package_ReadbookFeedback" :depends-on ("_package"))
    (:file "ReadbookGoal" :depends-on ("_package_ReadbookGoal"))
    (:file "_package_ReadbookGoal" :depends-on ("_package"))
    (:file "ReadbookResult" :depends-on ("_package_ReadbookResult"))
    (:file "_package_ReadbookResult" :depends-on ("_package"))
  ))