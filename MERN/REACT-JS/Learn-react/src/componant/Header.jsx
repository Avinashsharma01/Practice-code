import './CSSfile/head.css'
function Header(){
    return(
        <>
            <div className='pagehead'>
                <div className="logo">
                    <h1 className='logoname'>Avinash Sharma</h1>
                </div>
                <div className="link">
                <a href="#">Home</a>
                <a href="#">About</a>
                <a href="#">Services</a>
                <a href="#">Contact</a>
                </div>
            </div>
        </>
    )
}

export default Header