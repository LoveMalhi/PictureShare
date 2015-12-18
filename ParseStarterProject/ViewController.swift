//Jasdeep Singh Dhadda ,Jasdeep Singh Bhadhan ,Jasjeet Kaur ,Mandeep kaur,Lovepreet Kaur
import UIKit
import Parse

class ViewController: UIViewController {

    @IBOutlet var username: UITextField!
    
    @IBOutlet var errorLabel: UILabel!
    
    @IBAction func signUp(sender: AnyObject) {
        
        PFUser.logInWithUsernameInBackground(username.text!, password:"password") {
            
            (user: PFUser?, error: NSError?) -> Void in
            
            if let _ = error {
                
                let user = PFUser()
                user.username = self.username.text!
                user.password = "password"
                
                user.signUpInBackgroundWithBlock {
                    (succeeded, error) -> Void in
                    
                    if let error = error {
                        
                        let errorString = error.userInfo["error"]! as! String
                        
                        self.errorLabel.text = "Error: " + errorString
                        
                    } else {
                        
                        print("Signed Up")
                        self.performSegueWithIdentifier("ShowUserTable", sender: self)
                        
                    }
                    
                }
                
            } else {
                
                print("Logged In")
                self.performSegueWithIdentifier("ShowUserTable", sender: self)
            }
            
            
        }
        
    }
    
    override func viewWillAppear(animated: Bool) {
        
        self.navigationController?.navigationBar.hidden = true
        
    }
    
    
    override func viewDidAppear(animated: Bool) {
        
        if PFUser.currentUser()?.username != nil {
            
            self.performSegueWithIdentifier("ShowUserTable", sender: self)
            
        }
        
    }
    
    @IBOutlet weak var imageView: UIImageView!
    
    
    override func viewDidLoad() {
  
        super.viewDidLoad()
        
    }
    
override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()

    }
}

