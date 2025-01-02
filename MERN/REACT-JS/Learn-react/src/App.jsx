
import Header from "./componant/Header";
import Main from "./componant/Main";
import Footer from "./componant/Footer";
function App() {
  let arra=[1,2,3,4,5,6,7,8,9,10]
  return (
    <div className="Appppp">
      <Header />
      <Main array={arra} />
      <Footer/>
    </div>
  );
}
export default App;
