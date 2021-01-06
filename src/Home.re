let str = React.string;
let logo: string = [%raw "require('./assets/logo.svg')"];

[@react.component]
let make = () =>
  <div className="h-screen flex justify-center items-center">
    <div className="max-w-sm rounded overflow-hidden shadow-lg p-4">
      <img
        className="w-full p-4 mt-4"
        src=logo
        alt="Sunset in the mountains"
      />
    </div>
  </div>;
